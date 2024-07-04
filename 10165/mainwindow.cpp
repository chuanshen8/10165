#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iconhelper.h"

#include <QDebug>
#include <QGuiApplication>
#include <QScreen>
#include <QRect>
#include <stdio.h>
#include <pthread.h>
#include <errno.h>
#include <signal.h>
#include <unistd.h>
#include <sys/shm.h>
#include <sys/sem.h>
#include <sys/ipc.h>
#include "data_global.h"
#include "uploaddata.h"

#define UINT8 unsigned char

extern pthread_cond_t cond_zigbee_rcv;
extern pthread_cond_t cond_uart_cmd;
extern pthread_cond_t cond_main_thread;
extern pthread_cond_t cond_camera;
extern pthread_cond_t cond_refresh;
extern pthread_cond_t cond_refresh_updata;

extern pthread_mutex_t mutex_slinklist;
extern pthread_mutex_t mutex_zigbee_rcv;
extern pthread_mutex_t mutex_uart_cmd;
extern pthread_mutex_t mutex_main_thread;
extern pthread_mutex_t mutex_camera;
extern pthread_mutex_t mutex_refresh;
extern pthread_mutex_t mutex_refresh_updata;
extern pthread_mutex_t mutex_global;
extern pthread_mutex_t mutex_linklist;

extern int dev_camera_fd;
extern int dev_uart_fd;

extern int msgid;
extern int shmid;
extern int semid;

//extern struct env_info current1;
//extern struct env_info current2;
int env_flag = 0;
//extern int ep_no;


extern struct env_info_array all_info_RT;

pthread_t 	id_zigbee_rcv,
            id_uart_cmd,
            id_main_thread,
            id_camera,
            id_refresh,
            id_upload;

//BJ
int temperature_flag = 0,light_flag = 0,shidu_flag = 0,hongwai_flag = 0,gas_flag = 0;
int temperature_warn,light_warn,shidu_warn,hongwai_warn=1,gas_warn;
//int temp_wd,temp_light,temp_shidu,temp_gas,temp_hongwai;
int flash_code=3;

void ReleaseResource (int signo)
{

    pthread_mutex_destroy (&mutex_linklist);
    pthread_mutex_destroy (&mutex_global);
    pthread_mutex_destroy (&mutex_refresh_updata);
    pthread_mutex_destroy (&mutex_refresh);
    pthread_mutex_destroy (&mutex_camera);
    pthread_mutex_destroy (&mutex_main_thread);
    pthread_mutex_destroy (&mutex_uart_cmd);
    pthread_mutex_destroy (&mutex_zigbee_rcv);
    pthread_mutex_destroy (&mutex_slinklist);

    pthread_cond_destroy (&cond_refresh_updata);
    pthread_cond_destroy (&cond_refresh);
    pthread_cond_destroy (&cond_camera);
    pthread_cond_destroy (&cond_main_thread);
    pthread_cond_destroy (&cond_uart_cmd);

    msgctl (msgid, IPC_RMID, NULL);
    shmctl (shmid, IPC_RMID, NULL);
    semctl (semid, 1, IPC_RMID, NULL);

    pthread_cancel (id_refresh);
    pthread_cancel (id_camera);
    pthread_cancel (id_main_thread);
    pthread_cancel (id_uart_cmd);
    pthread_cancel (id_zigbee_rcv);

    close (dev_camera_fd);
    close (dev_uart_fd);

    printf ("All quit\n");

    exit(0);
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->initForm();
    this->initLeftMain();
    this->initLeftConfig();
    // 初始化下拉框，激活下拉框样式
//    QList<QComboBox*> comboList = {ui->methodComboBox1,//, ui->methodComboBox2,
//                                   ui->zigbeeComboBox1, ui->gpioComboBox,// ui->uartComboBox,
//                                   ui->gpioComboBox2, ui->interfaceComboBox};
//    for (int i = 0; i < comboList.size(); i++) {
//        comboList[i]->setView(new QListView());
//    }
//    // 添加阴影效果
//    QList<QWidget*> shadowList = {ui->widget_21, ui->widget_22, ui->widget_23, ui->widget_20,
//                            ui->widget_26,  ui->widget_4,//ui->widget_2,
//                            ui->widget_35, ui->widget_32,//ui->widget_46,
//                            ui->widget_37, ui->widget_41, ui->widget_44,ui->widget_52
//                           };
//    for (int i = 0; i < shadowList.size(); i++) {
//        QGraphicsDropShadowEffect *shadow_effect = new QGraphicsDropShadowEffect(shadowList[i]);
//        shadow_effect->setOffset(0, 0);              //阴影的偏移量
//        shadow_effect->setColor(QColor(180, 180, 180)); //阴影的颜色
//        shadow_effect->setBlurRadius(15);             // 阴影圆角的大小
//        shadowList[i]->setGraphicsEffect(shadow_effect);//给那个控件设置阴影，这里需要注意的是所有此控件的子控件，也都继承这个阴影。
//    }
     // 拓扑图
    networkWidget = new NetWorkWidget();
    ui->network->layout()->addWidget(networkWidget);

    /* 获取屏幕的分辨率，Qt官方建议使用这
     * 种方法获取屏幕分辨率，防上多屏设备导致对应不上
     * 注意，这是获取整个桌面系统的分辨率
     */
    QList <QScreen *> list_screen =  QGuiApplication::screens();

    /* 如果是ARM平台，直接设置大小为屏幕的大小 */
#if __arm__
    /* 重设大小 */
    this->resize(list_screen.at(0)->geometry().width(),
                 list_screen.at(0)->geometry().height());
    /* 默认是出厂系统的LED心跳的触发方式,想要控制LED，
     * 需要改变LED的触发方式，改为none，即无 */
    system("echo none > /sys/class/leds/sys-led/trigger");
#else
    /* 否则则设置主窗体大小为800x480 */
    this->resize(756, 580);
#endif
        pthread_mutex_init (&mutex_slinklist, NULL);
        pthread_mutex_init (&mutex_uart_cmd, NULL);
        pthread_mutex_init (&mutex_main_thread, NULL);
        pthread_mutex_init (&mutex_camera, NULL);
        pthread_mutex_init (&mutex_refresh, NULL);
        pthread_mutex_init (&mutex_refresh_updata, NULL);
        pthread_mutex_init (&mutex_global, NULL);
        pthread_mutex_init (&mutex_linklist, NULL);

        pthread_cond_init (&cond_zigbee_rcv, NULL);
        pthread_cond_init (&cond_uart_cmd, NULL);
        pthread_cond_init (&cond_main_thread, NULL);
        pthread_cond_init (&cond_camera, NULL);
        pthread_cond_init (&cond_refresh, NULL);
        pthread_cond_init (&cond_refresh_updata, NULL);

        signal (SIGINT, ReleaseResource);
        

        pthread_create (&id_zigbee_rcv, 0, pthread_zigbee_rcv, NULL);
        pthread_create (&id_upload, 0,pthread_upload , NULL);
        pthread_create (&id_uart_cmd, 0, pthread_uart_send, NULL);
        pthread_create (&id_main_thread, 0, pthread_main, NULL);
        pthread_create (&id_camera, 0, pthread_camera, NULL);
        pthread_create (&id_refresh, 0, pthread_refresh, NULL);

//        pushButton1=new QPushButton(this);
//        connect(pushButton1,SIGNAL(clicked()),this,SLOT(led_on()));
//        pushButton2=new QPushButton(this);
//        connect(pushButton2,SIGNAL(clicked()),this,SLOT(led_off()));
//        pushButton1->setGeometry(100,100,80,40);
//        pushButton2->setGeometry(200,100,80,40);
//        connect(ui->on,SIGNAL(clicked()),this,SLOT(led_on()));
//        connect(ui->off,SIGNAL(clicked()),this,SLOT(led_off()));
//        //QTimer::singleShot(3000,this,SLOT(datashow()));
        QTimer* showTimer = new QTimer(this);
        showTimer->start(3000);
        connect(showTimer,SIGNAL(timeout()), this,SLOT(datashow()));
        QTimer* updateNetworkTimer = new QTimer(this);
        connect(updateNetworkTimer, SIGNAL(timeout()), this, SLOT(updateNetwork()));
        updateNetworkTimer->start(3000);
        //int uploadData::OnlineDataUpload()
        // QTimer* updloadTimer = new QTimer(this);
        // connect(updloadTimer, SIGNAL(timeout()), this, SLOT(OnlineDataUpload()));
        // updloadTimer->start(3000);




}

MainWindow::~MainWindow()
{
    delete ui;
    pthread_join (id_zigbee_rcv, NULL);
    printf ("g1\n");
    pthread_join (id_uart_cmd, NULL);
    printf ("g2\n");
    pthread_join (id_main_thread, NULL);
    printf ("g3\n");
    pthread_join (id_camera, NULL);
    printf ("g4\n");
    pthread_join (id_refresh, NULL);
    printf ("g5\n");
}

UINT8 born_cmd(UINT8 ep_no,UINT8 device,UINT8 data) //将数据封装，包括节点序号，外设序号，操作命令
{
    return ((ep_no - 48)) << 6 | (device << 4) | (data << 0);
}



enum{
    DEVICE_RELY = 0,
    DEVICE_BEEP,
    DEVICE_LED,
    DEVICE_MAX
};


void MainWindow::led_on()
{
    key_t key;
    char buf[32];
    char ep_no[2];
    int msgid;
    struct msg msg_buf;
    memset(&msg_buf,0,sizeof(msg_buf));


    if((key = ftok("/app", 'g')) < 0)
    {
        perror("ftok");
        exit(1);
    }

    if((msgid = msgget(key, 0666)) < 0)
    {
        perror("msgget");
        exit(1);
    }
    bzero (msg_buf.text, sizeof (msg_buf.text));

    buf[0] = '1';
    ep_no[0] = '1';
/*  |--|--|----|
     no  dev  op
     10   10  0001

*/
    msg_buf.text[0] = born_cmd(ep_no[0],DEVICE_LED,(buf[0]-48));


    msg_buf.type = 1L;
    msg_buf.msgtype = 4L;
    msgsnd(msgid, &msg_buf,sizeof(msg_buf)-sizeof(long),0);


}
void MainWindow::led_off()
{
    key_t key;
    char buf[32];
    char ep_no[2];
    int msgid;
    struct msg msg_buf;
    memset(&msg_buf,0,sizeof(msg_buf));


    if((key = ftok("/app", 'g')) < 0)
    {
        perror("ftok");
        exit(1);
    }

    if((msgid = msgget(key, 0666)) < 0)
    {
        perror("msgget");
        exit(1);
    }
    bzero (msg_buf.text, sizeof (msg_buf.text));

    buf[0] = '0';
    ep_no[0] = '1';
/*  |--|--|----|
     no  dev  op
     10   10  0001

*/
    msg_buf.text[0] = born_cmd(ep_no[0],DEVICE_LED,(buf[0]-48));


    msg_buf.type = 1L;
    msg_buf.msgtype = 4L;
    msgsnd(msgid, &msg_buf,sizeof(msg_buf)-sizeof(long),0);


}
void MainWindow::initForm()
{
    this->setProperty("form", true);
    this->setProperty("canMove", true);
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinMaxButtonsHint);

    IconHelper::Instance()->setIcon(ui->labIco, QChar(0xf073), 30);
    IconHelper::Instance()->setIcon(ui->btnMenu_Min, QChar(0xf068));
    IconHelper::Instance()->setIcon(ui->btnMenu_Max, QChar(0xf067));
    IconHelper::Instance()->setIcon(ui->btnMenu_Close, QChar(0xf00d));

    QSize icoSize(32, 32);
    int icoWidth = 85;

    // 设置顶部导航按钮
    QList<QToolButton *> tbtns = ui->widgetTop->findChildren<QToolButton *>();
    foreach (QToolButton *btn, tbtns) {
        btn->setIconSize(icoSize);
        btn->setMinimumWidth(icoWidth);
        btn->setCheckable(true);
        connect(btn, SIGNAL(clicked()), this, SLOT(buttonClick()));
    }

    ui->btnMain->click();

    ui->widgetLeftMain->setProperty("flag", "left");
    ui->widgetLeftConfig->setProperty("flag", "left");
}

void MainWindow::buttonClick()
{
    QToolButton *b = (QToolButton *)sender();
    QString name = b->text();

    QList<QToolButton *> tbtns = ui->widgetTop->findChildren<QToolButton *>();
    foreach (QToolButton *btn, tbtns) {
        if (btn == b) {
            btn->setChecked(true);
        } else {
            btn->setChecked(false);
        }
    }
    if (name == "主 页") {
        ui->stackedWidget->setCurrentIndex(0);
    } else if (name == "设 置") {
        ui->stackedWidget->setCurrentIndex(1);
    }
    else if (name == "退 出") {
        exit(0);
    }
}

void MainWindow::initLeftMain()
{
    pixCharMain << 0xf030 << 0xf03e ;
                //<< 0xf247;
    btnsMain << ui->tbtnMain1 << ui->tbtnMain2;
            //<< ui->tbtnMain3;

    int count = btnsMain.count();
    for (int i = 0; i < count; i++) {
        btnsMain.at(i)->setCheckable(true);
        connect(btnsMain.at(i), SIGNAL(clicked(bool)), this, SLOT(leftMainClick()));
    }
    // 用于设置左侧导航栏的样式和图标。
    ui->tbtnMain1->click();
}

void MainWindow::initLeftConfig()
{
    pixCharConfig << 0xf031 << 0xf036 << 0xf249 << 0xf055 << 0xf05a << 0xf249;
//    btnsConfig << ui->tbtnConfig1 << ui->tbtnConfig2 << ui->tbtnConfig3 << ui->tbtnConfig4 << ui->tbtnConfig5;
    btnsConfig << ui->tbtnConfig4 << ui->tbtnConfig5;
               //<< ui->tbtnConfig6;
    int count = btnsConfig.count();
    for (int i = 0; i < count; i++) {
        btnsConfig.at(i)->setFont(QFont("Arial", 6));
        btnsConfig.at(i)->setCheckable(true);
        connect(btnsConfig.at(i), SIGNAL(clicked(bool)), this, SLOT(leftConfigClick()));
    }
    ui->tbtnConfig4->click();
}

void MainWindow::leftMainClick()
{
    QToolButton *b = (QToolButton *)sender();
    QString name = b->text();

    int count = btnsMain.count();
    for (int i = 0; i < count; i++) {
        if (btnsMain.at(i) == b) {
            // 跳转到相应实时数据或网络拓扑界面
            ui->mainStackedWidget->setCurrentIndex(i);
            btnsMain.at(i)->setChecked(true);
        } else {
            btnsMain.at(i)->setChecked(false);
        }
    }
}

void MainWindow::leftConfigClick()
{
    QToolButton *b = (QToolButton *)sender();
    QString name = b->text();

    int count = btnsConfig.count();
    for (int i = 0; i < count; i++) {
        if (btnsConfig.at(i) == b) {
            // 跳转到相应的配置界面
            //ui->configStackedWidget->setCurrentIndex(i);
            ui->configStackedWidget->setCurrentIndex(i);
            btnsConfig.at(i)->setChecked(true);
        } else {
            btnsConfig.at(i)->setChecked(false);
        }
    }
}

void MainWindow::on_btnMenu_Min_clicked()
{
    showMinimized();
}

void MainWindow::on_btnMenu_Max_clicked()
{
    static bool max = false;
    static QRect location = this->geometry();

    if (max) {
        this->setGeometry(location);
    } else {
        location = this->geometry();
        this->setGeometry(qApp->desktop()->availableGeometry());
    }

    this->setProperty("canMove", max);
    max = !max;
}
void MainWindow::on_btnMenu_Close_clicked()
{
    close();
}


void MainWindow::datashow()
{
//    ui->tem->setValue(current.temperature);
//    ui->hum->setValue(current.humidity);
//    ui->illu->setValue(current.illumination);
//    ui->gass->setValue(current.gas);
//    ui->inf->setValue(current.hongwai);
   // setText(QString::number(SharedData::share_temperature2));
    ui->temperature1->setText(QString::number(current1.temperature));
    ui->temperature2->setText(QString::number(current2.temperature));
    ui->humidity1->setText(QString::number(current1.humidity));
    ui->humidity2->setText(QString::number(current2.humidity));
    ui->gass1->setText(QString::number(current1.gas));
    ui->gass2->setText(QString::number(current2.gas));
    ui->illumination1->setText(QString::number(current1.illumination));
    ui->illumination2->setText(QString::number(current2.illumination));

    //env = ui->envComboBox->currentText();
    if(env_flag == 1)
    {
        //temperature_flag = 1;
        //temperature_warn = ui->env_limit->text().toInt();
        ui->env1->setText(QString::number(current1.temperature));
        ui->env2->setText(QString::number(current2.temperature));
    }
    else if(env_flag == 2)
    {
        //shidu_flag = 1;
        //shidu_warn = ui->env_limit->text().toInt();
        ui->env1->setText(QString::number(current1.illumination));
        ui->env2->setText(QString::number(current2.illumination));
    }
    else if (env_flag == 3)
    {
       // gas_flag = 1;
        //gas_warn = ui->env_limit->text().toInt();
        ui->env1->setText(QString::number(current1.gas));
        ui->env2->setText(QString::number(current2.gas));
    }
    else if (env_flag == 4)
    {
       // light_flag = 1;
        //light_warn = ui->env_limit->text().toInt();
        ui->env1->setText(QString::number(current1.illumination));
        ui->env2->setText(QString::number(current2.illumination));
    }

    if(hongwai_flag ==1 )
    {
        if(current1.hongwai||current2.hongwai)
       ui->HW->setText("有人！");
    else

         ui->HW->setText("无人");

  }

}

void MainWindow::on_openAlarmButton_env_clicked()
{
    env = ui->envComboBox->currentText();
    env_bj_method = ui->methodComboBox_env->currentText();
    if(env_bj_method=="常亮"){
       flash_code = 5;
    }else if(env_bj_method=="爆闪"){
       flash_code = 3;
    }else if(env_bj_method=="慢闪"){
       flash_code = 4;
    }

    if(env == "环境温度")
    {
        temperature_flag = 1;
        temperature_warn = ui->env_limit->text().toInt();
        env_flag = 1;
        ui->env1->setText(QString::number(current1.temperature));
        ui->env2->setText(QString::number(current2.temperature));
        //env_flag = 1;
    }
    else if(env == "环境湿度")
    {
        shidu_flag = 1;
        shidu_warn = ui->env_limit->text().toInt();
        env_flag = 2;
        ui->env1->setText(QString::number(current1.humidity));
        ui->env2->setText(QString::number(current2.humidity));
    }
    else if (env == "烟雾浓度")
    {
        gas_flag = 1;
        gas_warn = ui->env_limit->text().toInt();
        env_flag = 3;
        ui->env1->setText(QString::number(current1.gas));
        ui->env2->setText(QString::number(current2.gas));
    }
    else
    {
        light_flag = 1;
        light_warn = ui->env_limit->text().toInt();
        env_flag = 4;
        ui->env1->setText(QString::number(current1.illumination));
        ui->env2->setText(QString::number(current2.illumination));
    }

}

void MainWindow::on_closeAlarmButton_env_clicked()
{
    env_flag = 0;
    ui->env1->setText("--");
    ui->env2->setText("--");
    env = ui->envComboBox->currentText();
    if(env == "环境温度")
    {
        temperature_flag = 0;
        //temperature_warn = ui->env_limit->text().toInt();
    }
    else if(env == "环境湿度")
    {
        shidu_flag = 0;
        //shidu_warn = ui->env_limit->text().toInt();
    }
    else if (env == "烟雾浓度")
    {
        gas_flag = 0;
        //gas_warn = ui->env_limit->text().toInt();
    }
    else
    {
        light_flag = 0;
        //light_warn = ui->env_limit->text().toInt();
    }
}

void MainWindow::on_openAlarmButton_HW_clicked()
{
    if(current1.hongwai||current2.hongwai)
    {
        ui->HW->setText("有人！");
    }
    else
    {
         ui->HW->setText("无人");
    }

    hw_bj_method = ui->methodComboBox_HW->currentText();
    if(hw_bj_method=="常亮"){
       flash_code = 5;
    }else if(hw_bj_method=="爆闪"){
       flash_code = 3;
    }else if(hw_bj_method=="慢闪"){
       flash_code = 4;
    }
    hongwai_flag = 1;
}

void MainWindow::on_closeAlarmButton_HW_clicked()
{
    hongwai_flag = 0;
    ui->HW->setText("--");

}

void MainWindow::updateNetwork(){
    node[0]=1;
    if(current1.temperature)
    {
        node[1]=1;
        line[0]=1;
    }else
    {
        node[1]=0;
        line[0]=0;
    }

    if(current2.temperature)
    {
        node[2]=1;
        line[1]=1;
    }else
    {
        node[2]=0;
        line[1]=0;
    }
//    if(SharedData::share_mainTemperature_state){
//        qDebug()<<"share_mainTemperature_state";
//        node[0]=1;
//    }
//    if(SharedData::share_temperature1_state){
//        node[1]=1;
//        line[0]=1;
//    }else{
//        node[1]=0;
//        line[0]=0;
//    }
//    if(SharedData::share_temperature2_state){
//        node[2]=1;
//        line[1]=1;
//    }else{
//        node[2]=0;
//        line[1]=0;
//    }
    networkWidget->setNodeAndLineState(node,line);
}
// void MainWindow::OnlineDataUpload()
// {   
//     qDebug()<<"zyy";

//     OnlineDataUp();
// }
