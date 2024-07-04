/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widgetTitle;
    QHBoxLayout *horizontalLayout_15;
    QLabel *labIco;
    QLabel *labTitle;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widgetTop;
    QHBoxLayout *horizontalLayout_48;
    QToolButton *btnMain;
    QToolButton *btnConfig;
    QToolButton *btnExit;
    QWidget *widgetMenu;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_11;
    QPushButton *btnMenu_Min;
    QPushButton *btnMenu_Close;
    QPushButton *btnMenu_Max;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QHBoxLayout *horizontalLayout_49;
    QWidget *widgetLeftMain;
    QVBoxLayout *verticalLayout_33;
    QToolButton *tbtnMain1;
    QSpacerItem *verticalSpacer_2;
    QToolButton *tbtnMain2;
    QSpacerItem *verticalSpacer_3;
    QStackedWidget *mainStackedWidget;
    QWidget *online_data;
    QVBoxLayout *verticalLayout_34;
    QWidget *widget;
    QGridLayout *gridLayout_7;
    QWidget *widget_20;
    QVBoxLayout *verticalLayout_35;
    QLabel *label_35;
    QWidget *widget_75;
    QHBoxLayout *horizontalLayout_50;
    QLabel *label_45;
    QLabel *humidity1;
    QWidget *widget_24;
    QHBoxLayout *horizontalLayout_51;
    QLabel *label_46;
    QLabel *humidity2;
    QWidget *widget_41;
    QVBoxLayout *verticalLayout_36;
    QLabel *label_36;
    QWidget *widget_76;
    QHBoxLayout *horizontalLayout_52;
    QLabel *label_47;
    QLabel *temperature1;
    QWidget *widget_63;
    QHBoxLayout *horizontalLayout_53;
    QLabel *label_48;
    QLabel *temperature2;
    QWidget *widget_42;
    QVBoxLayout *verticalLayout_37;
    QLabel *label_49;
    QWidget *widget_77;
    QHBoxLayout *horizontalLayout_54;
    QLabel *label_50;
    QLabel *gass1;
    QWidget *widget_64;
    QHBoxLayout *horizontalLayout_55;
    QLabel *label_51;
    QLabel *gass2;
    QWidget *widget_43;
    QVBoxLayout *verticalLayout_38;
    QLabel *label_52;
    QWidget *widget_44;
    QHBoxLayout *horizontalLayout_56;
    QLabel *label_53;
    QLabel *illumination1;
    QWidget *widget_45;
    QHBoxLayout *horizontalLayout_57;
    QLabel *label_54;
    QLabel *illumination2;
    QWidget *network;
    QVBoxLayout *verticalLayout_39;
    QWidget *page2;
    QHBoxLayout *horizontalLayout_58;
    QWidget *widgetLeftConfig;
    QVBoxLayout *verticalLayout_40;
    QToolButton *tbtnConfig4;
    QSpacerItem *verticalSpacer_14;
    QToolButton *tbtnConfig5;
    QSpacerItem *verticalSpacer_15;
    QStackedWidget *configStackedWidget;
    QWidget *env_page;
    QVBoxLayout *verticalLayout_41;
    QWidget *widget_27;
    QHBoxLayout *horizontalLayout_59;
    QWidget *widget_25;
    QVBoxLayout *verticalLayout_42;
    QWidget *widget_52;
    QVBoxLayout *verticalLayout_43;
    QWidget *widget_66;
    QHBoxLayout *horizontalLayout_60;
    QLabel *label_55;
    QComboBox *envComboBox;
    QWidget *widget_67;
    QHBoxLayout *horizontalLayout_61;
    QLabel *label_56;
    QLineEdit *env_limit;
    QWidget *widget_68;
    QHBoxLayout *horizontalLayout_62;
    QLabel *label_57;
    QComboBox *methodComboBox_env;
    QWidget *widget_78;
    QVBoxLayout *verticalLayout_44;
    QWidget *widget_79;
    QVBoxLayout *verticalLayout_45;
    QWidget *widget_80;
    QHBoxLayout *horizontalLayout_63;
    QLabel *label_58;
    QLabel *env1;
    QWidget *widget_81;
    QHBoxLayout *horizontalLayout_64;
    QLabel *label_59;
    QLabel *env2;
    QWidget *widget_82;
    QVBoxLayout *verticalLayout_46;
    QWidget *widget_83;
    QHBoxLayout *horizontalLayout_65;
    QSpacerItem *horizontalSpacer_19;
    QPushButton *openAlarmButton_env;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *closeAlarmButton_env;
    QSpacerItem *horizontalSpacer_21;
    QWidget *HW_page;
    QVBoxLayout *verticalLayout_47;
    QWidget *widget_84;
    QVBoxLayout *verticalLayout_48;
    QHBoxLayout *horizontalLayout_66;
    QWidget *widget_85;
    QHBoxLayout *horizontalLayout_67;
    QLabel *label_60;
    QComboBox *methodComboBox_HW;
    QWidget *widget_86;
    QHBoxLayout *horizontalLayout_68;
    QLabel *label_6;
    QLabel *HW;
    QWidget *widget_87;
    QHBoxLayout *horizontalLayout_69;
    QSpacerItem *horizontalSpacer_22;
    QPushButton *openAlarmButton_HW;
    QSpacerItem *horizontalSpacer_23;
    QPushButton *closeAlarmButton_HW;
    QSpacerItem *horizontalSpacer_24;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widgetTitle = new QWidget(centralwidget);
        widgetTitle->setObjectName(QString::fromUtf8("widgetTitle"));
        widgetTitle->setGeometry(QRect(0, 0, 786, 86));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetTitle->sizePolicy().hasHeightForWidth());
        widgetTitle->setSizePolicy(sizePolicy);
        widgetTitle->setStyleSheet(QString::fromUtf8("border-bottom: 2px solid rgb(41, 47, 56);"));
        horizontalLayout_15 = new QHBoxLayout(widgetTitle);
        horizontalLayout_15->setSpacing(10);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(10, 0, 0, 0);
        labIco = new QLabel(widgetTitle);
        labIco->setObjectName(QString::fromUtf8("labIco"));
        labIco->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(labIco);

        labTitle = new QLabel(widgetTitle);
        labTitle->setObjectName(QString::fromUtf8("labTitle"));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        labTitle->setFont(font);
        labTitle->setStyleSheet(QString::fromUtf8(""));
        labTitle->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_15->addWidget(labTitle);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_4);

        widgetTop = new QWidget(widgetTitle);
        widgetTop->setObjectName(QString::fromUtf8("widgetTop"));
        horizontalLayout_48 = new QHBoxLayout(widgetTop);
        horizontalLayout_48->setSpacing(5);
        horizontalLayout_48->setObjectName(QString::fromUtf8("horizontalLayout_48"));
        horizontalLayout_48->setContentsMargins(0, 0, 0, 0);
        btnMain = new QToolButton(widgetTop);
        btnMain->setObjectName(QString::fromUtf8("btnMain"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnMain->sizePolicy().hasHeightForWidth());
        btnMain->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        btnMain->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/main_data.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnMain->setIcon(icon);
        btnMain->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_48->addWidget(btnMain);

        btnConfig = new QToolButton(widgetTop);
        btnConfig->setObjectName(QString::fromUtf8("btnConfig"));
        btnConfig->setEnabled(true);
        sizePolicy1.setHeightForWidth(btnConfig->sizePolicy().hasHeightForWidth());
        btnConfig->setSizePolicy(sizePolicy1);
        btnConfig->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/main_config.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnConfig->setIcon(icon1);
        btnConfig->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_48->addWidget(btnConfig);

        btnExit = new QToolButton(widgetTop);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        sizePolicy1.setHeightForWidth(btnExit->sizePolicy().hasHeightForWidth());
        btnExit->setSizePolicy(sizePolicy1);
        btnExit->setFont(font1);
        btnExit->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/main_exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnExit->setIcon(icon2);
        btnExit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_48->addWidget(btnExit);


        horizontalLayout_15->addWidget(widgetTop);

        widgetMenu = new QWidget(widgetTitle);
        widgetMenu->setObjectName(QString::fromUtf8("widgetMenu"));
        gridLayout_6 = new QGridLayout(widgetMenu);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_11, 1, 1, 1, 3);

        btnMenu_Min = new QPushButton(widgetMenu);
        btnMenu_Min->setObjectName(QString::fromUtf8("btnMenu_Min"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnMenu_Min->sizePolicy().hasHeightForWidth());
        btnMenu_Min->setSizePolicy(sizePolicy2);
        btnMenu_Min->setMinimumSize(QSize(30, 30));
        btnMenu_Min->setMaximumSize(QSize(30, 30));
        btnMenu_Min->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Min->setFocusPolicy(Qt::NoFocus);

        gridLayout_6->addWidget(btnMenu_Min, 0, 1, 1, 1);

        btnMenu_Close = new QPushButton(widgetMenu);
        btnMenu_Close->setObjectName(QString::fromUtf8("btnMenu_Close"));
        sizePolicy2.setHeightForWidth(btnMenu_Close->sizePolicy().hasHeightForWidth());
        btnMenu_Close->setSizePolicy(sizePolicy2);
        btnMenu_Close->setMinimumSize(QSize(30, 30));
        btnMenu_Close->setMaximumSize(QSize(30, 30));
        btnMenu_Close->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Close->setFocusPolicy(Qt::NoFocus);

        gridLayout_6->addWidget(btnMenu_Close, 0, 3, 1, 1);

        btnMenu_Max = new QPushButton(widgetMenu);
        btnMenu_Max->setObjectName(QString::fromUtf8("btnMenu_Max"));
        sizePolicy2.setHeightForWidth(btnMenu_Max->sizePolicy().hasHeightForWidth());
        btnMenu_Max->setSizePolicy(sizePolicy2);
        btnMenu_Max->setMinimumSize(QSize(30, 30));
        btnMenu_Max->setMaximumSize(QSize(30, 30));
        btnMenu_Max->setFocusPolicy(Qt::NoFocus);

        gridLayout_6->addWidget(btnMenu_Max, 0, 2, 1, 1);


        horizontalLayout_15->addWidget(widgetMenu);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 98, 749, 470));
        stackedWidget->setMaximumSize(QSize(16777215, 520));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page1 = new QWidget();
        page1->setObjectName(QString::fromUtf8("page1"));
        page1->setMaximumSize(QSize(16777215, 530));
        horizontalLayout_49 = new QHBoxLayout(page1);
        horizontalLayout_49->setSpacing(10);
        horizontalLayout_49->setObjectName(QString::fromUtf8("horizontalLayout_49"));
        horizontalLayout_49->setContentsMargins(0, 0, 0, 0);
        widgetLeftMain = new QWidget(page1);
        widgetLeftMain->setObjectName(QString::fromUtf8("widgetLeftMain"));
        widgetLeftMain->setMinimumSize(QSize(100, 0));
        widgetLeftMain->setMaximumSize(QSize(100, 570));
        widgetLeftMain->setStyleSheet(QString::fromUtf8("#widgetLeftMain{\n"
"	background-color: rgb(41, 47, 56)\n"
"}\n"
"\n"
"QToolButton {\n"
"	color: white;\n"
"	font: normal normal 16px \"Microsoft YaHei\";\n"
"    background-color: #292f38;\n"
"	border: none;\n"
"    width:95px;\n"
"    height:45px;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"    background-color: #1d2025;\n"
"	border-left: 3px solid rgb(2, 159, 234);\n"
"}\n"
"\n"
"QToolButton:pressed {\n"
"    background-color: #1d2025;\n"
"	border-left: 3px solid rgb(2, 159, 234);\n"
"}\n"
"QToolButton:checked\n"
"{\n"
"    background-color: #1d2025;\n"
"	border-left: 3px solid rgb(2, 159, 234);\n"
"}"));
        verticalLayout_33 = new QVBoxLayout(widgetLeftMain);
        verticalLayout_33->setSpacing(0);
        verticalLayout_33->setObjectName(QString::fromUtf8("verticalLayout_33"));
        verticalLayout_33->setContentsMargins(0, 0, 0, 0);
        tbtnMain1 = new QToolButton(widgetLeftMain);
        tbtnMain1->setObjectName(QString::fromUtf8("tbtnMain1"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tbtnMain1->sizePolicy().hasHeightForWidth());
        tbtnMain1->setSizePolicy(sizePolicy3);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/main_help.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtnMain1->setIcon(icon3);
        tbtnMain1->setIconSize(QSize(25, 25));
        tbtnMain1->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout_33->addWidget(tbtnMain1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_33->addItem(verticalSpacer_2);

        tbtnMain2 = new QToolButton(widgetLeftMain);
        tbtnMain2->setObjectName(QString::fromUtf8("tbtnMain2"));
        sizePolicy3.setHeightForWidth(tbtnMain2->sizePolicy().hasHeightForWidth());
        tbtnMain2->setSizePolicy(sizePolicy3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/main_about.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtnMain2->setIcon(icon4);
        tbtnMain2->setIconSize(QSize(25, 25));
        tbtnMain2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout_33->addWidget(tbtnMain2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_33->addItem(verticalSpacer_3);


        horizontalLayout_49->addWidget(widgetLeftMain);

        mainStackedWidget = new QStackedWidget(page1);
        mainStackedWidget->setObjectName(QString::fromUtf8("mainStackedWidget"));
        online_data = new QWidget();
        online_data->setObjectName(QString::fromUtf8("online_data"));
        online_data->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit {\n"
"   	font: normal normal 16px \"Microsoft YaHei\";\n"
"	padding-top: 5px;\n"
"	padding-bottom: 5px;\n"
"}\n"
"QCompleter:item {\n"
"	font: normal normal 16px \"Microsoft YaHei\";\n"
"	height: 20px;\n"
"}\n"
"QTextEdit {\n"
"   	font: normal normal 18px \"Microsoft YaHei\";\n"
"}\n"
"QLabel {\n"
"	font: normal bold 13px \"Microsoft YaHei\";\n"
"}\n"
"QComboBox{\n"
"    color: #232323;\n"
"    font: normal normal 18px \"Microsoft YaHei\";\n"
"    padding: 0px 0px 0px 5px;\n"
"    border: 2px solid rgb(187, 212, 243);\n"
"    background-color: white;\n"
"    min-height: 35px;\n"
"} \n"
"/* \344\270\213\346\213\211\345\220\216\347\232\204\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView {\n"
"    background-color: rgb(85, 170, 255);\n"
"    color: rgb(255, 255, 255);\n"
"    font: normal normal 18px \"Microsoft YaHei\";\n"
"} \n"
"QComboBox QAbstractItemView::item{\n"
"    height:35px;\n"
"    color:#666666;\n"
" "
                        "   background-color:#FFFFFF;\n"
"}\n"
"QComboBox QAbstractItemView::item:selected{\n"
"    background-color:rgba(33, 136, 241, 255);\n"
"    color:#ffffff;\n"
"}\n"
"/* \344\270\213\346\213\211\347\256\255\345\244\264\345\214\272\345\237\237\346\240\267\345\274\217 */\n"
"QComboBox::drop-down{\n"
"    border: none;\n"
"    padding-right: 5px;\n"
"}\n"
"/* \344\270\213\346\213\211\347\256\255\345\244\264\346\240\267\345\274\217 */\n"
"QComboBox::down-arrow {\n"
"    image: url(:/image/down.png);\n"
"    height:15px;\n"
"    width: 15px;\n"
"}"));
        verticalLayout_34 = new QVBoxLayout(online_data);
        verticalLayout_34->setObjectName(QString::fromUtf8("verticalLayout_34"));
        verticalLayout_34->setSizeConstraint(QLayout::SetMinimumSize);
        widget = new QWidget(online_data);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 16777215));
        widget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_7 = new QGridLayout(widget);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        widget_20 = new QWidget(widget);
        widget_20->setObjectName(QString::fromUtf8("widget_20"));
        widget_20->setMaximumSize(QSize(16777215, 300));
        widget_20->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius:10px;\n"
"}"));
        verticalLayout_35 = new QVBoxLayout(widget_20);
        verticalLayout_35->setObjectName(QString::fromUtf8("verticalLayout_35"));
        label_35 = new QLabel(widget_20);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setMaximumSize(QSize(16777215, 27));
        label_35->setStyleSheet(QString::fromUtf8("QLabel{\n"
"     font: normal bold 18px \"Microsoft YaHei\";\n"
"    color:#3b79c5;\n"
"}"));
        label_35->setFrameShape(QFrame::StyledPanel);
        label_35->setAlignment(Qt::AlignCenter);

        verticalLayout_35->addWidget(label_35);

        widget_75 = new QWidget(widget_20);
        widget_75->setObjectName(QString::fromUtf8("widget_75"));
        widget_75->setMaximumSize(QSize(16777215, 24));
        horizontalLayout_50 = new QHBoxLayout(widget_75);
        horizontalLayout_50->setSpacing(0);
        horizontalLayout_50->setObjectName(QString::fromUtf8("horizontalLayout_50"));
        horizontalLayout_50->setContentsMargins(0, 0, 0, 0);
        label_45 = new QLabel(widget_75);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setAlignment(Qt::AlignCenter);

        horizontalLayout_50->addWidget(label_45);

        humidity1 = new QLabel(widget_75);
        humidity1->setObjectName(QString::fromUtf8("humidity1"));
        humidity1->setStyleSheet(QString::fromUtf8(""));
        humidity1->setAlignment(Qt::AlignCenter);

        horizontalLayout_50->addWidget(humidity1);


        verticalLayout_35->addWidget(widget_75);

        widget_24 = new QWidget(widget_20);
        widget_24->setObjectName(QString::fromUtf8("widget_24"));
        widget_24->setMaximumSize(QSize(16777215, 24));
        horizontalLayout_51 = new QHBoxLayout(widget_24);
        horizontalLayout_51->setSpacing(0);
        horizontalLayout_51->setObjectName(QString::fromUtf8("horizontalLayout_51"));
        horizontalLayout_51->setContentsMargins(0, 0, 0, 0);
        label_46 = new QLabel(widget_24);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setAlignment(Qt::AlignCenter);

        horizontalLayout_51->addWidget(label_46);

        humidity2 = new QLabel(widget_24);
        humidity2->setObjectName(QString::fromUtf8("humidity2"));
        humidity2->setStyleSheet(QString::fromUtf8(""));
        humidity2->setAlignment(Qt::AlignCenter);

        horizontalLayout_51->addWidget(humidity2);


        verticalLayout_35->addWidget(widget_24);


        gridLayout_7->addWidget(widget_20, 0, 1, 1, 1);

        widget_41 = new QWidget(widget);
        widget_41->setObjectName(QString::fromUtf8("widget_41"));
        widget_41->setMaximumSize(QSize(16777215, 300));
        widget_41->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius:10px;\n"
"}"));
        verticalLayout_36 = new QVBoxLayout(widget_41);
        verticalLayout_36->setObjectName(QString::fromUtf8("verticalLayout_36"));
        label_36 = new QLabel(widget_41);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setMaximumSize(QSize(16777215, 27));
        label_36->setStyleSheet(QString::fromUtf8("QLabel{\n"
"     font: normal bold 18px \"Microsoft YaHei\";\n"
"    color:#3b79c5;\n"
"}"));
        label_36->setFrameShape(QFrame::StyledPanel);
        label_36->setAlignment(Qt::AlignCenter);

        verticalLayout_36->addWidget(label_36);

        widget_76 = new QWidget(widget_41);
        widget_76->setObjectName(QString::fromUtf8("widget_76"));
        widget_76->setMaximumSize(QSize(16777215, 24));
        horizontalLayout_52 = new QHBoxLayout(widget_76);
        horizontalLayout_52->setSpacing(0);
        horizontalLayout_52->setObjectName(QString::fromUtf8("horizontalLayout_52"));
        horizontalLayout_52->setContentsMargins(0, 0, 0, 0);
        label_47 = new QLabel(widget_76);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setAlignment(Qt::AlignCenter);

        horizontalLayout_52->addWidget(label_47);

        temperature1 = new QLabel(widget_76);
        temperature1->setObjectName(QString::fromUtf8("temperature1"));
        temperature1->setStyleSheet(QString::fromUtf8(""));
        temperature1->setAlignment(Qt::AlignCenter);

        horizontalLayout_52->addWidget(temperature1);


        verticalLayout_36->addWidget(widget_76);

        widget_63 = new QWidget(widget_41);
        widget_63->setObjectName(QString::fromUtf8("widget_63"));
        widget_63->setMaximumSize(QSize(16777215, 24));
        horizontalLayout_53 = new QHBoxLayout(widget_63);
        horizontalLayout_53->setSpacing(0);
        horizontalLayout_53->setObjectName(QString::fromUtf8("horizontalLayout_53"));
        horizontalLayout_53->setContentsMargins(0, 0, 0, 0);
        label_48 = new QLabel(widget_63);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setAlignment(Qt::AlignCenter);

        horizontalLayout_53->addWidget(label_48);

        temperature2 = new QLabel(widget_63);
        temperature2->setObjectName(QString::fromUtf8("temperature2"));
        temperature2->setStyleSheet(QString::fromUtf8(""));
        temperature2->setAlignment(Qt::AlignCenter);

        horizontalLayout_53->addWidget(temperature2);


        verticalLayout_36->addWidget(widget_63);


        gridLayout_7->addWidget(widget_41, 0, 0, 1, 1);

        widget_42 = new QWidget(widget);
        widget_42->setObjectName(QString::fromUtf8("widget_42"));
        widget_42->setMaximumSize(QSize(16777215, 300));
        widget_42->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius:10px;\n"
"}"));
        verticalLayout_37 = new QVBoxLayout(widget_42);
        verticalLayout_37->setObjectName(QString::fromUtf8("verticalLayout_37"));
        label_49 = new QLabel(widget_42);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setMaximumSize(QSize(16777215, 27));
        label_49->setStyleSheet(QString::fromUtf8("QLabel{\n"
"     font: normal bold 18px \"Microsoft YaHei\";\n"
"    color:#3b79c5;\n"
"}"));
        label_49->setFrameShape(QFrame::StyledPanel);
        label_49->setAlignment(Qt::AlignCenter);

        verticalLayout_37->addWidget(label_49);

        widget_77 = new QWidget(widget_42);
        widget_77->setObjectName(QString::fromUtf8("widget_77"));
        widget_77->setMaximumSize(QSize(16777215, 24));
        horizontalLayout_54 = new QHBoxLayout(widget_77);
        horizontalLayout_54->setSpacing(0);
        horizontalLayout_54->setObjectName(QString::fromUtf8("horizontalLayout_54"));
        horizontalLayout_54->setContentsMargins(0, 0, 0, 0);
        label_50 = new QLabel(widget_77);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setAlignment(Qt::AlignCenter);

        horizontalLayout_54->addWidget(label_50);

        gass1 = new QLabel(widget_77);
        gass1->setObjectName(QString::fromUtf8("gass1"));
        gass1->setStyleSheet(QString::fromUtf8(""));
        gass1->setAlignment(Qt::AlignCenter);

        horizontalLayout_54->addWidget(gass1);


        verticalLayout_37->addWidget(widget_77);

        widget_64 = new QWidget(widget_42);
        widget_64->setObjectName(QString::fromUtf8("widget_64"));
        widget_64->setMaximumSize(QSize(16777215, 24));
        horizontalLayout_55 = new QHBoxLayout(widget_64);
        horizontalLayout_55->setSpacing(0);
        horizontalLayout_55->setObjectName(QString::fromUtf8("horizontalLayout_55"));
        horizontalLayout_55->setContentsMargins(0, 0, 0, 0);
        label_51 = new QLabel(widget_64);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setAlignment(Qt::AlignCenter);

        horizontalLayout_55->addWidget(label_51);

        gass2 = new QLabel(widget_64);
        gass2->setObjectName(QString::fromUtf8("gass2"));
        gass2->setStyleSheet(QString::fromUtf8(""));
        gass2->setAlignment(Qt::AlignCenter);

        horizontalLayout_55->addWidget(gass2);


        verticalLayout_37->addWidget(widget_64);


        gridLayout_7->addWidget(widget_42, 1, 1, 1, 1);

        widget_43 = new QWidget(widget);
        widget_43->setObjectName(QString::fromUtf8("widget_43"));
        widget_43->setMaximumSize(QSize(16777215, 300));
        widget_43->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius:10px;\n"
"}"));
        verticalLayout_38 = new QVBoxLayout(widget_43);
        verticalLayout_38->setObjectName(QString::fromUtf8("verticalLayout_38"));
        label_52 = new QLabel(widget_43);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setMaximumSize(QSize(16777215, 27));
        label_52->setStyleSheet(QString::fromUtf8("QLabel{\n"
"     font: normal bold 18px \"Microsoft YaHei\";\n"
"    color:#3b79c5;\n"
"}"));
        label_52->setFrameShape(QFrame::StyledPanel);
        label_52->setAlignment(Qt::AlignCenter);

        verticalLayout_38->addWidget(label_52);

        widget_44 = new QWidget(widget_43);
        widget_44->setObjectName(QString::fromUtf8("widget_44"));
        widget_44->setMaximumSize(QSize(16777215, 24));
        horizontalLayout_56 = new QHBoxLayout(widget_44);
        horizontalLayout_56->setSpacing(0);
        horizontalLayout_56->setObjectName(QString::fromUtf8("horizontalLayout_56"));
        horizontalLayout_56->setContentsMargins(0, 0, 0, 0);
        label_53 = new QLabel(widget_44);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setAlignment(Qt::AlignCenter);

        horizontalLayout_56->addWidget(label_53);

        illumination1 = new QLabel(widget_44);
        illumination1->setObjectName(QString::fromUtf8("illumination1"));
        illumination1->setStyleSheet(QString::fromUtf8(""));
        illumination1->setAlignment(Qt::AlignCenter);

        horizontalLayout_56->addWidget(illumination1);


        verticalLayout_38->addWidget(widget_44);

        widget_45 = new QWidget(widget_43);
        widget_45->setObjectName(QString::fromUtf8("widget_45"));
        widget_45->setMaximumSize(QSize(16777215, 24));
        horizontalLayout_57 = new QHBoxLayout(widget_45);
        horizontalLayout_57->setSpacing(0);
        horizontalLayout_57->setObjectName(QString::fromUtf8("horizontalLayout_57"));
        horizontalLayout_57->setContentsMargins(0, 0, 0, 0);
        label_54 = new QLabel(widget_45);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setAlignment(Qt::AlignCenter);

        horizontalLayout_57->addWidget(label_54);

        illumination2 = new QLabel(widget_45);
        illumination2->setObjectName(QString::fromUtf8("illumination2"));
        illumination2->setStyleSheet(QString::fromUtf8(""));
        illumination2->setAlignment(Qt::AlignCenter);

        horizontalLayout_57->addWidget(illumination2);


        verticalLayout_38->addWidget(widget_45);


        gridLayout_7->addWidget(widget_43, 1, 0, 1, 1);


        verticalLayout_34->addWidget(widget);

        mainStackedWidget->addWidget(online_data);
        network = new QWidget();
        network->setObjectName(QString::fromUtf8("network"));
        network->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: normal normal 20px \"Microsoft YaHei\";\n"
"}"));
        verticalLayout_39 = new QVBoxLayout(network);
        verticalLayout_39->setObjectName(QString::fromUtf8("verticalLayout_39"));
        mainStackedWidget->addWidget(network);

        horizontalLayout_49->addWidget(mainStackedWidget);

        stackedWidget->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName(QString::fromUtf8("page2"));
        horizontalLayout_58 = new QHBoxLayout(page2);
        horizontalLayout_58->setSpacing(0);
        horizontalLayout_58->setObjectName(QString::fromUtf8("horizontalLayout_58"));
        horizontalLayout_58->setContentsMargins(0, 0, 0, 0);
        widgetLeftConfig = new QWidget(page2);
        widgetLeftConfig->setObjectName(QString::fromUtf8("widgetLeftConfig"));
        widgetLeftConfig->setMinimumSize(QSize(100, 0));
        widgetLeftConfig->setMaximumSize(QSize(100, 16777215));
        widgetLeftConfig->setStyleSheet(QString::fromUtf8("#widgetLeftConfig{\n"
"	background-color: rgb(41, 47, 56)\n"
"}\n"
"\n"
"QToolButton {\n"
"	color: white;\n"
"	font: normal normal 16px \"Microsoft YaHei\";\n"
"    background-color: #292f38;\n"
"	border: none;\n"
"    width:95px;\n"
"    height:45px;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"    background-color: #1d2025;\n"
"	border-left: 3px solid rgb(2, 159, 234);\n"
"}\n"
"\n"
"QToolButton:pressed {\n"
"    background-color: #1d2025;\n"
"	border-left: 3px solid rgb(2, 159, 234);\n"
"}\n"
"QToolButton:checked\n"
"{\n"
"    background-color: #1d2025;\n"
"	border-left: 3px solid rgb(2, 159, 234);\n"
"}"));
        verticalLayout_40 = new QVBoxLayout(widgetLeftConfig);
        verticalLayout_40->setSpacing(0);
        verticalLayout_40->setObjectName(QString::fromUtf8("verticalLayout_40"));
        verticalLayout_40->setContentsMargins(0, 0, 0, 0);
        tbtnConfig4 = new QToolButton(widgetLeftConfig);
        tbtnConfig4->setObjectName(QString::fromUtf8("tbtnConfig4"));
        sizePolicy3.setHeightForWidth(tbtnConfig4->sizePolicy().hasHeightForWidth());
        tbtnConfig4->setSizePolicy(sizePolicy3);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/main_company.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtnConfig4->setIcon(icon5);
        tbtnConfig4->setIconSize(QSize(25, 20));
        tbtnConfig4->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout_40->addWidget(tbtnConfig4);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_40->addItem(verticalSpacer_14);

        tbtnConfig5 = new QToolButton(widgetLeftConfig);
        tbtnConfig5->setObjectName(QString::fromUtf8("tbtnConfig5"));
        sizePolicy3.setHeightForWidth(tbtnConfig5->sizePolicy().hasHeightForWidth());
        tbtnConfig5->setSizePolicy(sizePolicy3);
        tbtnConfig5->setIcon(icon5);
        tbtnConfig5->setIconSize(QSize(25, 20));
        tbtnConfig5->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout_40->addWidget(tbtnConfig5);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_40->addItem(verticalSpacer_15);


        horizontalLayout_58->addWidget(widgetLeftConfig);

        configStackedWidget = new QStackedWidget(page2);
        configStackedWidget->setObjectName(QString::fromUtf8("configStackedWidget"));
        configStackedWidget->setMaximumSize(QSize(16777215, 570));
        configStackedWidget->setStyleSheet(QString::fromUtf8(""));
        env_page = new QWidget();
        env_page->setObjectName(QString::fromUtf8("env_page"));
        env_page->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit {\n"
"   	font: normal normal 16px \"Microsoft YaHei\";\n"
"	padding-top: 5px;\n"
"	padding-bottom: 5px;\n"
"}\n"
"QCompleter:item {\n"
"	font: normal normal 16px \"Microsoft YaHei\";\n"
"	height: 20px;\n"
"}\n"
"QTextEdit {\n"
"   	font: normal normal 16px \"Microsoft YaHei\";\n"
"}\n"
"QLabel {\n"
"	font: normal bold 18px \"Microsoft YaHei\";\n"
"}\n"
"QComboBox{\n"
"    color: #232323;\n"
"    font: normal normal 18px \"Microsoft YaHei\";\n"
"    padding: 0px 0px 0px 5px;\n"
"    border: 2px solid rgb(187, 212, 243);\n"
"    background-color: white;\n"
"    min-height: 35px;\n"
"} \n"
"/* \344\270\213\346\213\211\345\220\216\347\232\204\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView {\n"
"    background-color: rgb(85, 170, 255);\n"
"    color: rgb(255, 255, 255);\n"
"    font: normal normal 18px \"Microsoft YaHei\";\n"
"} \n"
"QComboBox QAbstractItemView::item{\n"
"    height:35px;\n"
"    color:#666666;\n"
" "
                        "   background-color:#FFFFFF;\n"
"}\n"
"QComboBox QAbstractItemView::item:selected{\n"
"    background-color:rgba(33, 136, 241, 255);\n"
"    color:#ffffff;\n"
"}\n"
"/* \344\270\213\346\213\211\347\256\255\345\244\264\345\214\272\345\237\237\346\240\267\345\274\217 */\n"
"QComboBox::drop-down{\n"
"    border: none;\n"
"    padding-right: 5px;\n"
"}\n"
"/* \344\270\213\346\213\211\347\256\255\345\244\264\346\240\267\345\274\217 */\n"
"QComboBox::down-arrow {\n"
"    image: url(:/image/down.png);\n"
"    height:15px;\n"
"    width: 15px;\n"
"}"));
        verticalLayout_41 = new QVBoxLayout(env_page);
        verticalLayout_41->setSpacing(0);
        verticalLayout_41->setObjectName(QString::fromUtf8("verticalLayout_41"));
        widget_27 = new QWidget(env_page);
        widget_27->setObjectName(QString::fromUtf8("widget_27"));
        horizontalLayout_59 = new QHBoxLayout(widget_27);
        horizontalLayout_59->setSpacing(15);
        horizontalLayout_59->setObjectName(QString::fromUtf8("horizontalLayout_59"));
        horizontalLayout_59->setContentsMargins(0, 0, 0, 0);
        widget_25 = new QWidget(widget_27);
        widget_25->setObjectName(QString::fromUtf8("widget_25"));
        verticalLayout_42 = new QVBoxLayout(widget_25);
        verticalLayout_42->setObjectName(QString::fromUtf8("verticalLayout_42"));
        widget_52 = new QWidget(widget_25);
        widget_52->setObjectName(QString::fromUtf8("widget_52"));
        widget_52->setStyleSheet(QString::fromUtf8("#widget_52{\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));
        verticalLayout_43 = new QVBoxLayout(widget_52);
        verticalLayout_43->setObjectName(QString::fromUtf8("verticalLayout_43"));
        widget_66 = new QWidget(widget_52);
        widget_66->setObjectName(QString::fromUtf8("widget_66"));
        horizontalLayout_60 = new QHBoxLayout(widget_66);
        horizontalLayout_60->setSpacing(31);
        horizontalLayout_60->setObjectName(QString::fromUtf8("horizontalLayout_60"));
        label_55 = new QLabel(widget_66);
        label_55->setObjectName(QString::fromUtf8("label_55"));

        horizontalLayout_60->addWidget(label_55);

        envComboBox = new QComboBox(widget_66);
        envComboBox->addItem(QString());
        envComboBox->addItem(QString());
        envComboBox->addItem(QString());
        envComboBox->addItem(QString());
        envComboBox->setObjectName(QString::fromUtf8("envComboBox"));
        envComboBox->setEnabled(true);
        sizePolicy3.setHeightForWidth(envComboBox->sizePolicy().hasHeightForWidth());
        envComboBox->setSizePolicy(sizePolicy3);

        horizontalLayout_60->addWidget(envComboBox);


        verticalLayout_43->addWidget(widget_66);

        widget_67 = new QWidget(widget_52);
        widget_67->setObjectName(QString::fromUtf8("widget_67"));
        horizontalLayout_61 = new QHBoxLayout(widget_67);
        horizontalLayout_61->setObjectName(QString::fromUtf8("horizontalLayout_61"));
        label_56 = new QLabel(widget_67);
        label_56->setObjectName(QString::fromUtf8("label_56"));

        horizontalLayout_61->addWidget(label_56);

        env_limit = new QLineEdit(widget_67);
        env_limit->setObjectName(QString::fromUtf8("env_limit"));

        horizontalLayout_61->addWidget(env_limit);


        verticalLayout_43->addWidget(widget_67);

        widget_68 = new QWidget(widget_52);
        widget_68->setObjectName(QString::fromUtf8("widget_68"));
        horizontalLayout_62 = new QHBoxLayout(widget_68);
        horizontalLayout_62->setObjectName(QString::fromUtf8("horizontalLayout_62"));
        label_57 = new QLabel(widget_68);
        label_57->setObjectName(QString::fromUtf8("label_57"));

        horizontalLayout_62->addWidget(label_57);

        methodComboBox_env = new QComboBox(widget_68);
        methodComboBox_env->addItem(QString());
        methodComboBox_env->addItem(QString());
        methodComboBox_env->addItem(QString());
        methodComboBox_env->setObjectName(QString::fromUtf8("methodComboBox_env"));
        sizePolicy3.setHeightForWidth(methodComboBox_env->sizePolicy().hasHeightForWidth());
        methodComboBox_env->setSizePolicy(sizePolicy3);

        horizontalLayout_62->addWidget(methodComboBox_env);


        verticalLayout_43->addWidget(widget_68);


        verticalLayout_42->addWidget(widget_52);


        horizontalLayout_59->addWidget(widget_25);

        widget_78 = new QWidget(widget_27);
        widget_78->setObjectName(QString::fromUtf8("widget_78"));
        widget_78->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_44 = new QVBoxLayout(widget_78);
        verticalLayout_44->setObjectName(QString::fromUtf8("verticalLayout_44"));
        verticalLayout_44->setContentsMargins(11, 11, 11, 11);
        widget_79 = new QWidget(widget_78);
        widget_79->setObjectName(QString::fromUtf8("widget_79"));
        widget_79->setStyleSheet(QString::fromUtf8("#widget_79{\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:!hover{\n"
"	font: normal normal 15px \"Microsoft YaHei\";\n"
"	color: rgb(77, 141, 222);\n"
"	border-radius: 5px;\n"
"	border: 2px solid rgb(77, 141, 222);\n"
"	padding: 7px 10px 7px 10px;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	font: normal normal 15px \"Microsoft YaHei\";\n"
"	color: white;\n"
"	border-radius: 5px;\n"
"	border: none;\n"
"	padding: 7px 10px 7px 10px;\n"
"	background-color: rgba(78, 153, 250,150);\n"
"}"));
        verticalLayout_45 = new QVBoxLayout(widget_79);
        verticalLayout_45->setObjectName(QString::fromUtf8("verticalLayout_45"));
        widget_80 = new QWidget(widget_79);
        widget_80->setObjectName(QString::fromUtf8("widget_80"));
        horizontalLayout_63 = new QHBoxLayout(widget_80);
        horizontalLayout_63->setObjectName(QString::fromUtf8("horizontalLayout_63"));
        horizontalLayout_63->setContentsMargins(22, -1, -1, -1);
        label_58 = new QLabel(widget_80);
        label_58->setObjectName(QString::fromUtf8("label_58"));

        horizontalLayout_63->addWidget(label_58);

        env1 = new QLabel(widget_80);
        env1->setObjectName(QString::fromUtf8("env1"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(env1->sizePolicy().hasHeightForWidth());
        env1->setSizePolicy(sizePolicy4);

        horizontalLayout_63->addWidget(env1);


        verticalLayout_45->addWidget(widget_80);

        widget_81 = new QWidget(widget_79);
        widget_81->setObjectName(QString::fromUtf8("widget_81"));
        horizontalLayout_64 = new QHBoxLayout(widget_81);
        horizontalLayout_64->setObjectName(QString::fromUtf8("horizontalLayout_64"));
        horizontalLayout_64->setContentsMargins(22, -1, -1, -1);
        label_59 = new QLabel(widget_81);
        label_59->setObjectName(QString::fromUtf8("label_59"));

        horizontalLayout_64->addWidget(label_59);

        env2 = new QLabel(widget_81);
        env2->setObjectName(QString::fromUtf8("env2"));
        sizePolicy4.setHeightForWidth(env2->sizePolicy().hasHeightForWidth());
        env2->setSizePolicy(sizePolicy4);

        horizontalLayout_64->addWidget(env2);


        verticalLayout_45->addWidget(widget_81);


        verticalLayout_44->addWidget(widget_79);


        horizontalLayout_59->addWidget(widget_78);

        horizontalLayout_59->setStretch(0, 3);
        horizontalLayout_59->setStretch(1, 2);

        verticalLayout_41->addWidget(widget_27);

        widget_82 = new QWidget(env_page);
        widget_82->setObjectName(QString::fromUtf8("widget_82"));
        verticalLayout_46 = new QVBoxLayout(widget_82);
        verticalLayout_46->setObjectName(QString::fromUtf8("verticalLayout_46"));
        widget_83 = new QWidget(widget_82);
        widget_83->setObjectName(QString::fromUtf8("widget_83"));
        widget_83->setStyleSheet(QString::fromUtf8("#widget_83 {\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));
        horizontalLayout_65 = new QHBoxLayout(widget_83);
        horizontalLayout_65->setObjectName(QString::fromUtf8("horizontalLayout_65"));
        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_65->addItem(horizontalSpacer_19);

        openAlarmButton_env = new QPushButton(widget_83);
        openAlarmButton_env->setObjectName(QString::fromUtf8("openAlarmButton_env"));
        openAlarmButton_env->setStyleSheet(QString::fromUtf8("QPushButton:!hover{\n"
"	font: normal normal 16px \"Microsoft YaHei\";\n"
"	color: rgb(77, 141, 222);\n"
"	border-radius: 5px;\n"
"	border: 2px solid rgb(77, 141, 222);\n"
"	padding: 7px 20px 7px 20px;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	font: normal normal 16px \"Microsoft YaHei\";\n"
"	color: white;\n"
"	border-radius: 5px;\n"
"	border: none;\n"
"	padding: 8px 20px 8px 20px;\n"
"	background-color: rgba(78, 153, 250,150);\n"
"}"));

        horizontalLayout_65->addWidget(openAlarmButton_env);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_65->addItem(horizontalSpacer_20);

        closeAlarmButton_env = new QPushButton(widget_83);
        closeAlarmButton_env->setObjectName(QString::fromUtf8("closeAlarmButton_env"));
        closeAlarmButton_env->setStyleSheet(QString::fromUtf8("QPushButton:!hover{\n"
"	font: normal normal 16px \"Microsoft YaHei\";\n"
"	color: rgb(77, 141, 222);\n"
"	border-radius: 5px;\n"
"	border: 2px solid rgb(77, 141, 222);\n"
"	padding: 7px 20px 7px 20px;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	font: normal normal 16px \"Microsoft YaHei\";\n"
"	color: white;\n"
"	border-radius: 5px;\n"
"	border: none;\n"
"	padding: 8px 20px 8px 20px;\n"
"	background-color: rgba(78, 153, 250,150);\n"
"}"));

        horizontalLayout_65->addWidget(closeAlarmButton_env);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_65->addItem(horizontalSpacer_21);


        verticalLayout_46->addWidget(widget_83);


        verticalLayout_41->addWidget(widget_82);

        configStackedWidget->addWidget(env_page);
        HW_page = new QWidget();
        HW_page->setObjectName(QString::fromUtf8("HW_page"));
        HW_page->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit {\n"
"   	font: normal normal 16px \"Microsoft YaHei\";\n"
"	padding-top: 5px;\n"
"	padding-bottom: 5px;\n"
"}\n"
"QCompleter:item {\n"
"	font: normal normal 16px \"Microsoft YaHei\";\n"
"	height: 20px;\n"
"}\n"
"QTextEdit {\n"
"   	font: normal normal 16px \"Microsoft YaHei\";\n"
"}\n"
"QLabel {\n"
"	font: normal bold 18px \"Microsoft YaHei\";\n"
"}\n"
"QComboBox{\n"
"    color: #232323;\n"
"    font: normal normal 18px \"Microsoft YaHei\";\n"
"    padding: 0px 0px 0px 5px;\n"
"    border: 2px solid rgb(187, 212, 243);\n"
"    background-color: white;\n"
"    min-height: 35px;\n"
"} \n"
"/* \344\270\213\346\213\211\345\220\216\347\232\204\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView {\n"
"    background-color: rgb(85, 170, 255);\n"
"    color: rgb(255, 255, 255);\n"
"    font: normal normal 18px \"Microsoft YaHei\";\n"
"} \n"
"QComboBox QAbstractItemView::item{\n"
"    height:35px;\n"
"    color:#666666;\n"
" "
                        "   background-color:#FFFFFF;\n"
"}\n"
"QComboBox QAbstractItemView::item:selected{\n"
"    background-color:rgba(33, 136, 241, 255);\n"
"    color:#ffffff;\n"
"}\n"
"/* \344\270\213\346\213\211\347\256\255\345\244\264\345\214\272\345\237\237\346\240\267\345\274\217 */\n"
"QComboBox::drop-down{\n"
"    border: none;\n"
"    padding-right: 5px;\n"
"}\n"
"/* \344\270\213\346\213\211\347\256\255\345\244\264\346\240\267\345\274\217 */\n"
"QComboBox::down-arrow {\n"
"    image: url(:/image/down.png);\n"
"    height:15px;\n"
"    width: 15px;\n"
"}"));
        verticalLayout_47 = new QVBoxLayout(HW_page);
        verticalLayout_47->setSpacing(0);
        verticalLayout_47->setObjectName(QString::fromUtf8("verticalLayout_47"));
        widget_84 = new QWidget(HW_page);
        widget_84->setObjectName(QString::fromUtf8("widget_84"));
        verticalLayout_48 = new QVBoxLayout(widget_84);
        verticalLayout_48->setObjectName(QString::fromUtf8("verticalLayout_48"));
        horizontalLayout_66 = new QHBoxLayout();
        horizontalLayout_66->setObjectName(QString::fromUtf8("horizontalLayout_66"));
        widget_85 = new QWidget(widget_84);
        widget_85->setObjectName(QString::fromUtf8("widget_85"));
        widget_85->setStyleSheet(QString::fromUtf8("#widget_85{\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:!hover{\n"
"	font: normal normal 15px \"Microsoft YaHei\";\n"
"	color: rgb(77, 141, 222);\n"
"	border-radius: 5px;\n"
"	border: 2px solid rgb(77, 141, 222);\n"
"	padding: 7px 10px 7px 10px;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	font: normal normal 15px \"Microsoft YaHei\";\n"
"	color: white;\n"
"	border-radius: 5px;\n"
"	border: none;\n"
"	padding: 7px 10px 7px 10px;\n"
"	background-color: rgba(78, 153, 250,150);\n"
"}"));
        horizontalLayout_67 = new QHBoxLayout(widget_85);
        horizontalLayout_67->setObjectName(QString::fromUtf8("horizontalLayout_67"));
        label_60 = new QLabel(widget_85);
        label_60->setObjectName(QString::fromUtf8("label_60"));

        horizontalLayout_67->addWidget(label_60);

        methodComboBox_HW = new QComboBox(widget_85);
        methodComboBox_HW->addItem(QString());
        methodComboBox_HW->addItem(QString());
        methodComboBox_HW->addItem(QString());
        methodComboBox_HW->addItem(QString());
        methodComboBox_HW->setObjectName(QString::fromUtf8("methodComboBox_HW"));
        methodComboBox_HW->setEnabled(true);
        sizePolicy3.setHeightForWidth(methodComboBox_HW->sizePolicy().hasHeightForWidth());
        methodComboBox_HW->setSizePolicy(sizePolicy3);

        horizontalLayout_67->addWidget(methodComboBox_HW);


        horizontalLayout_66->addWidget(widget_85);

        widget_86 = new QWidget(widget_84);
        widget_86->setObjectName(QString::fromUtf8("widget_86"));
        widget_86->setStyleSheet(QString::fromUtf8("#widget_86{\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:!hover{\n"
"	font: normal normal 15px \"Microsoft YaHei\";\n"
"	color: rgb(77, 141, 222);\n"
"	border-radius: 5px;\n"
"	border: 2px solid rgb(77, 141, 222);\n"
"	padding: 7px 10px 7px 10px;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	font: normal normal 15px \"Microsoft YaHei\";\n"
"	color: white;\n"
"	border-radius: 5px;\n"
"	border: none;\n"
"	padding: 7px 10px 7px 10px;\n"
"	background-color: rgba(78, 153, 250,150);\n"
"}"));
        horizontalLayout_68 = new QHBoxLayout(widget_86);
        horizontalLayout_68->setObjectName(QString::fromUtf8("horizontalLayout_68"));
        label_6 = new QLabel(widget_86);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_68->addWidget(label_6);

        HW = new QLabel(widget_86);
        HW->setObjectName(QString::fromUtf8("HW"));

        horizontalLayout_68->addWidget(HW);


        horizontalLayout_66->addWidget(widget_86);


        verticalLayout_48->addLayout(horizontalLayout_66);

        widget_87 = new QWidget(widget_84);
        widget_87->setObjectName(QString::fromUtf8("widget_87"));
        widget_87->setStyleSheet(QString::fromUtf8("#widget_87{\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));
        horizontalLayout_69 = new QHBoxLayout(widget_87);
        horizontalLayout_69->setObjectName(QString::fromUtf8("horizontalLayout_69"));
        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_69->addItem(horizontalSpacer_22);

        openAlarmButton_HW = new QPushButton(widget_87);
        openAlarmButton_HW->setObjectName(QString::fromUtf8("openAlarmButton_HW"));
        openAlarmButton_HW->setStyleSheet(QString::fromUtf8("QPushButton:!hover{\n"
"	font: normal normal 16px \"Microsoft YaHei\";\n"
"	color: rgb(77, 141, 222);\n"
"	border-radius: 5px;\n"
"	border: 2px solid rgb(77, 141, 222);\n"
"	padding: 7px 20px 7px 20px;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	font: normal normal 16px \"Microsoft YaHei\";\n"
"	color: white;\n"
"	border-radius: 5px;\n"
"	border: none;\n"
"	padding: 8px 20px 8px 20px;\n"
"	background-color: rgba(78, 153, 250,150);\n"
"}"));

        horizontalLayout_69->addWidget(openAlarmButton_HW);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_69->addItem(horizontalSpacer_23);

        closeAlarmButton_HW = new QPushButton(widget_87);
        closeAlarmButton_HW->setObjectName(QString::fromUtf8("closeAlarmButton_HW"));
        closeAlarmButton_HW->setStyleSheet(QString::fromUtf8("QPushButton:!hover{\n"
"	font: normal normal 16px \"Microsoft YaHei\";\n"
"	color: rgb(77, 141, 222);\n"
"	border-radius: 5px;\n"
"	border: 2px solid rgb(77, 141, 222);\n"
"	padding: 7px 20px 7px 20px;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	font: normal normal 16px \"Microsoft YaHei\";\n"
"	color: white;\n"
"	border-radius: 5px;\n"
"	border: none;\n"
"	padding: 8px 20px 8px 20px;\n"
"	background-color: rgba(78, 153, 250,150);\n"
"}"));

        horizontalLayout_69->addWidget(closeAlarmButton_HW);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_69->addItem(horizontalSpacer_24);


        verticalLayout_48->addWidget(widget_87);


        verticalLayout_47->addWidget(widget_84);

        configStackedWidget->addWidget(HW_page);

        horizontalLayout_58->addWidget(configStackedWidget);

        stackedWidget->addWidget(page2);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        configStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labIco->setText(QString());
        labTitle->setText(QCoreApplication::translate("MainWindow", "10165\345\267\245\344\270\232\347\275\221\345\205\263\347\263\273\347\273\237", nullptr));
        btnMain->setText(QCoreApplication::translate("MainWindow", "\344\270\273 \351\241\265", nullptr));
        btnConfig->setText(QCoreApplication::translate("MainWindow", "\350\256\276 \347\275\256", nullptr));
        btnExit->setText(QCoreApplication::translate("MainWindow", "\351\200\200 \345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        btnMenu_Min->setToolTip(QCoreApplication::translate("MainWindow", "\346\234\200\345\260\217\345\214\226", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMenu_Min->setText(QString());
#if QT_CONFIG(tooltip)
        btnMenu_Close->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMenu_Close->setText(QString());
        btnMenu_Max->setText(QString());
        tbtnMain1->setText(QCoreApplication::translate("MainWindow", "\345\256\236\346\227\266\346\225\260\346\215\256", nullptr));
        tbtnMain2->setText(QCoreApplication::translate("MainWindow", "\347\275\221\347\273\234\346\213\223\346\211\221", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "\347\216\257\345\242\203\346\271\277\345\272\246", nullptr));
        label_45->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\344\270\200\357\274\232", nullptr));
        humidity1->setText(QCoreApplication::translate("MainWindow", "55", nullptr));
        label_46->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\344\272\214\357\274\232", nullptr));
        humidity2->setText(QCoreApplication::translate("MainWindow", "55", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "\347\216\257\345\242\203\346\270\251\345\272\246", nullptr));
        label_47->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\344\270\200:", nullptr));
        temperature1->setText(QCoreApplication::translate("MainWindow", "55", nullptr));
        label_48->setText(QCoreApplication::translate("MainWindow", " \350\212\202\347\202\271\344\272\214\357\274\232", nullptr));
        temperature2->setText(QCoreApplication::translate("MainWindow", "55", nullptr));
        label_49->setText(QCoreApplication::translate("MainWindow", "\347\203\237\351\233\276\346\265\223\345\272\246", nullptr));
        label_50->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\344\270\200\357\274\232", nullptr));
        gass1->setText(QCoreApplication::translate("MainWindow", "55", nullptr));
        label_51->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\344\272\214\357\274\232", nullptr));
        gass2->setText(QCoreApplication::translate("MainWindow", "55", nullptr));
        label_52->setText(QCoreApplication::translate("MainWindow", "\345\205\211\347\205\247\345\274\272\345\272\246", nullptr));
        label_53->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\344\270\200:", nullptr));
        illumination1->setText(QCoreApplication::translate("MainWindow", "55", nullptr));
        label_54->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\344\272\214:", nullptr));
        illumination2->setText(QCoreApplication::translate("MainWindow", "55", nullptr));
        tbtnConfig4->setText(QCoreApplication::translate("MainWindow", "\347\216\257\345\242\203\344\277\241\346\201\257\346\212\245\350\255\246", nullptr));
        tbtnConfig5->setText(QCoreApplication::translate("MainWindow", "\347\272\242\345\244\226\347\233\221\346\216\247\346\212\245\350\255\246", nullptr));
        label_55->setText(QCoreApplication::translate("MainWindow", "\347\216\257\345\242\203\344\277\241\346\201\257\357\274\232      ", nullptr));
        envComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\347\216\257\345\242\203\346\270\251\345\272\246", nullptr));
        envComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\347\216\257\345\242\203\346\271\277\345\272\246", nullptr));
        envComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\345\205\211\347\205\247\345\274\272\345\272\246", nullptr));
        envComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "\347\203\237\351\233\276\346\265\223\345\272\246", nullptr));

        label_56->setText(QCoreApplication::translate("MainWindow", "\346\212\245\350\255\246\351\230\210\345\200\274(mm):    ", nullptr));
        label_57->setText(QCoreApplication::translate("MainWindow", "\346\212\245\350\255\246\346\226\271\345\274\217:             ", nullptr));
        methodComboBox_env->setItemText(0, QCoreApplication::translate("MainWindow", "\345\270\270\344\272\256", nullptr));
        methodComboBox_env->setItemText(1, QCoreApplication::translate("MainWindow", "\347\210\206\351\227\252", nullptr));
        methodComboBox_env->setItemText(2, QCoreApplication::translate("MainWindow", "\346\205\242\351\227\252", nullptr));

        label_58->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\344\270\200\357\274\232", nullptr));
        env1->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_59->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\344\272\214\357\274\232", nullptr));
        env2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        openAlarmButton_env->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\220\257\346\212\245\350\255\246", nullptr));
        closeAlarmButton_env->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\212\245\350\255\246", nullptr));
        label_60->setText(QCoreApplication::translate("MainWindow", "\346\212\245\350\255\246\346\226\271\345\274\217\357\274\232", nullptr));
        methodComboBox_HW->setItemText(0, QCoreApplication::translate("MainWindow", "\345\270\270\344\272\256", nullptr));
        methodComboBox_HW->setItemText(1, QCoreApplication::translate("MainWindow", "\347\210\206\351\227\252", nullptr));
        methodComboBox_HW->setItemText(2, QCoreApplication::translate("MainWindow", "\346\205\242\351\227\252", nullptr));
        methodComboBox_HW->setItemText(3, QString());

        label_6->setText(QCoreApplication::translate("MainWindow", "\347\272\242\345\244\226\347\233\221\346\216\247\344\277\241\346\201\257\357\274\232", nullptr));
        HW->setText(QCoreApplication::translate("MainWindow", "\346\234\211\344\272\272\357\274\201", nullptr));
        openAlarmButton_HW->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\220\257\346\212\245\350\255\246", nullptr));
        closeAlarmButton_HW->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\212\245\350\255\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
