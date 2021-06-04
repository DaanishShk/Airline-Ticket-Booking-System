/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdmin_Login;
    QAction *actionAbout;
    QAction *actionVersion;
    QAction *actionStatus;
    QAction *actionSettings;
    QAction *actionAPI_Setting;
    QWidget *centralwidget;
    QStackedWidget *BookingStack;
    QWidget *page;
    QLabel *label_4;
    QPushButton *bookBtn;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *departureCBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QComboBox *departureCBox_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLabel *label_3;
    QCalendarWidget *calendarWidget;
    QWidget *page_2;
    QPushButton *fbookingBtn;
    QWidget *widget;
    QMenuBar *menubar;
    QMenu *menuOptions;
    QMenu *menuServer_Connection;
    QMenu *menuAbout;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1120, 700);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(12);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagesMain/airplane.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"\n"
"border-image:url(:/imagesMain/background1.jpg);\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"QPushButton {\n"
"\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QComboBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 3px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background: white;\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                 stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"}\n"
"\n"
"/* QComboBox gets the \"on\" state when the popup is open */\n"
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #D3D3D3, stop: 0.4 #D8D8D8,\n"
"                                stop: 0.5 #DDDDDD, stop: 1.0 #E1E1E1);\n"
"}\n"
"\n"
"QComboB"
                        "ox:on { /* shift the text when the popup opens */\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; /* just a single line */\n"
"    border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"\n"
"/*QComboBox::down-arrow {\n"
"    image: url(:/images/SVG/chevron-down.svg);\n"
"}*/\n"
"\n"
"QComboBox::down-arrow:on { /* shift the arrow when popup is open */\n"
"    top: 1px;\n"
"    left: 1px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    border: 2px solid darkgray;\n"
"    selection-background-color: lightgray;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0 #616161, stop: 0.5 #505050,\n"
"             "
                        "                         stop: 0.6 #434343, stop:1 #656565);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"}\n"
"\n"
"QHeaderView::section:checked\n"
"{\n"
"    background-color: rgb(0, 132, 255);\n"
"}\n"
"\n"
"/* style the sort indicator */\n"
"/*QHeaderView::down-arrow {\n"
"    image: url(down_arrow.png);\n"
"}\n"
"\n"
"QHeaderView::up-arrow {\n"
"    image: url(up_arrow.png);\n"
"}*/\n"
"\n"
"QLineEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 4px;\n"
"    padding: 0 8px;\n"
"    background: rgb(234, 234, 234);\n"
"    selection-background-color: darkgray;\n"
"}\n"
"\n"
"QLineEdit[echoMode=\"2\"] {\n"
"    lineedit-password-character: 42;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QMenuBar {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0 rgb(84, 209, 255), stop:1 rgb(0, 170, 255));\n"
"    spacing: 3px; /* spacing between menu bar items */\n"
"}\n"
"\n"
"QMenuBar::item {\n"
"    p"
                        "adding: 1px 4px;\n"
"    background: transparent;\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QMenuBar::item:selected { /* when selected using mouse or keyboard */\n"
"    background: rgb(2, 242, 255);\n"
"}\n"
"\n"
"QMenuBar::item:pressed {\n"
"    background: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 4px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QCalendarWidget\n"
"{\n"
"	background-color: grey; \n"
"	selection-background-color: rgb(64, 64, 64); \n"
"	selection-color: rgb(0, 255, 0); \n"
"}\n"
"\n"
"QPushButton:default {\n"
"   "
                        " border-color: navy; /* make the default button prominent */\n"
"}\n"
"\n"
"QPushButton{\n"
"\n"
"color:rgb(0, 0, 0)\n"
"}\n"
"\n"
"QInputDialog{\n"
"\n"
"color:rgb(0, 0, 0);\n"
"\n"
"}\n"
"\n"
"QMenu {\n"
"    background-color: rgb(160, 242, 255); /* sets background of the menu */\n"
"    border: 1px solid black;\n"
"}\n"
"\n"
"QMenu::item {\n"
"    /* sets background of menu item. set this to something non-transparent\n"
"        if you want menu color and menu item color to be different */\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QMenu::item:selected { /* when user selects item using mouse or keyboard */\n"
"    background-color: rgb(28, 176, 255);\n"
"}"));
        actionAdmin_Login = new QAction(MainWindow);
        actionAdmin_Login->setObjectName(QString::fromUtf8("actionAdmin_Login"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/SVG/device-desktop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdmin_Login->setIcon(icon1);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/SVG/question.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon2);
        actionVersion = new QAction(MainWindow);
        actionVersion->setObjectName(QString::fromUtf8("actionVersion"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/SVG/information.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionVersion->setIcon(icon3);
        actionStatus = new QAction(MainWindow);
        actionStatus->setObjectName(QString::fromUtf8("actionStatus"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/SVG/flag.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionStatus->setIcon(icon4);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/SVG/gear.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon5);
        actionAPI_Setting = new QAction(MainWindow);
        actionAPI_Setting->setObjectName(QString::fromUtf8("actionAPI_Setting"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/SVG/cloud.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAPI_Setting->setIcon(icon6);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        BookingStack = new QStackedWidget(centralwidget);
        BookingStack->setObjectName(QString::fromUtf8("BookingStack"));
        BookingStack->setGeometry(QRect(50, 50, 481, 591));
        BookingStack->setStyleSheet(QString::fromUtf8("#BookingStack{\n"
"\n"
"background:rgba(36, 36, 36,150);\n"
"border-radius:8px;\n"
"\n"
"}"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_4 = new QLabel(page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 10, 211, 69));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Pastelle DEMO")});
        font1.setPointSize(37);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("#label_4 {\n"
"\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}"));
        bookBtn = new QPushButton(page);
        bookBtn->setObjectName(QString::fromUtf8("bookBtn"));
        bookBtn->setGeometry(QRect(310, 530, 131, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Pastelle DEMO")});
        font2.setPointSize(22);
        bookBtn->setFont(font2);
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 90, 421, 411));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("OCR A Extended")});
        font3.setPointSize(16);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("#label {\n"
"\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}"));

        horizontalLayout_2->addWidget(label);

        departureCBox = new QComboBox(layoutWidget);
        departureCBox->setObjectName(QString::fromUtf8("departureCBox"));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Nirmala UI")});
        font4.setPointSize(12);
        font4.setBold(false);
        departureCBox->setFont(font4);
        departureCBox->setInsertPolicy(QComboBox::InsertAlphabetically);

        horizontalLayout_2->addWidget(departureCBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("#label_2 {\n"
"\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}"));

        horizontalLayout_7->addWidget(label_2);

        departureCBox_2 = new QComboBox(layoutWidget);
        departureCBox_2->setObjectName(QString::fromUtf8("departureCBox_2"));
        departureCBox_2->setFont(font4);
        departureCBox_2->setInsertPolicy(QComboBox::InsertAlphabetically);

        horizontalLayout_7->addWidget(departureCBox_2);


        verticalLayout_2->addLayout(horizontalLayout_7);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("OCR A Extended")});
        font5.setPointSize(14);
        label_3->setFont(font5);
        label_3->setStyleSheet(QString::fromUtf8("#label_3 {\n"
"\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}"));

        verticalLayout->addWidget(label_3);

        calendarWidget = new QCalendarWidget(layoutWidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setStyleSheet(QString::fromUtf8("#calendarWidget {\n"
"\n"
"background:rgb(42, 42, 42);\n"
"\n"
"}"));

        verticalLayout->addWidget(calendarWidget);


        verticalLayout_2->addLayout(verticalLayout);

        BookingStack->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        fbookingBtn = new QPushButton(page_2);
        fbookingBtn->setObjectName(QString::fromUtf8("fbookingBtn"));
        fbookingBtn->setGeometry(QRect(10, 460, 84, 25));
        BookingStack->addWidget(page_2);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(690, 580, 432, 100));
        widget->setStyleSheet(QString::fromUtf8("#widget{\n"
"\n"
"border-image:url(:/imagesMain/airlinelogo.png);\n"
"\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1120, 22));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuServer_Connection = new QMenu(menuOptions);
        menuServer_Connection->setObjectName(QString::fromUtf8("menuServer_Connection"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/SVG/stack.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuServer_Connection->setIcon(icon7);
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuOptions->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuOptions->addSeparator();
        menuOptions->addAction(actionAdmin_Login);
        menuOptions->addSeparator();
        menuOptions->addAction(actionAPI_Setting);
        menuOptions->addAction(menuServer_Connection->menuAction());
        menuServer_Connection->addAction(actionStatus);
        menuServer_Connection->addAction(actionSettings);
        menuAbout->addAction(actionAbout);
        menuAbout->addAction(actionVersion);

        retranslateUi(MainWindow);

        BookingStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Airline Reservation System", nullptr));
        actionAdmin_Login->setText(QCoreApplication::translate("MainWindow", "Admin Login", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionVersion->setText(QCoreApplication::translate("MainWindow", "Version", nullptr));
        actionStatus->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        actionSettings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        actionAPI_Setting->setText(QCoreApplication::translate("MainWindow", "API Setting", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Flight Booking", nullptr));
        bookBtn->setText(QCoreApplication::translate("MainWindow", "Search Flight", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "From:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "To:", nullptr));
        label_5->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Select Date", nullptr));
        fbookingBtn->setText(QCoreApplication::translate("MainWindow", "Flight booking", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("MainWindow", "Options", nullptr));
        menuServer_Connection->setTitle(QCoreApplication::translate("MainWindow", "Server Connection", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
