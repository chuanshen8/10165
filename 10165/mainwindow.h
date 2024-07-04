#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QToolButton>
#include <QTimer>
#include <QComboBox>
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <networkwidget.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
//class QToolButton;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //GUI
    QString env;
    QString env_bj_method;
    QString hw_bj_method;

private:
    Ui::MainWindow *ui;
    QList<int> pixCharMain;
    QList<QToolButton *> btnsMain;

    QList<int> pixCharConfig;
    QList<QToolButton *> btnsConfig;
    // 拓扑图
    NetWorkWidget *networkWidget;

    int node[3]={0,0,0};
    int line[2]={0,0};

//     QPushButton *pushButton1;
//     QPushButton *pushButton2;
private slots:
    void initForm();
    void buttonClick();
    void initLeftMain();
    void initLeftConfig();
    void leftMainClick();
    void leftConfigClick();

private slots:
    void on_btnMenu_Min_clicked();
    void on_btnMenu_Max_clicked();
    void on_btnMenu_Close_clicked();
private slots:
     void led_on();
     void led_off();
     void datashow();
     void on_openAlarmButton_env_clicked();
     void on_closeAlarmButton_env_clicked();
     void on_openAlarmButton_HW_clicked();
     void on_closeAlarmButton_HW_clicked();
     void updateNetwork();
     //void OnlineDataUpload();
};
#endif // MAINWINDOW_H
