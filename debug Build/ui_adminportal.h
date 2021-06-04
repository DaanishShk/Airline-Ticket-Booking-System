/********************************************************************************
** Form generated from reading UI file 'adminportal.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPORTAL_H
#define UI_ADMINPORTAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminportal
{
public:
    QAction *actionBookings;
    QAction *actionEmployees;
    QAction *actionAirports;
    QAction *actionSearcj;
    QAction *actionEdit;
    QAction *actionRefresh;
    QWidget *centralwidget;
    QTableView *tableView;
    QPushButton *doneBtn;
    QPushButton *addRow;
    QPushButton *deleteRow;
    QLabel *tableLabel;
    QToolBar *toolBar;

    void setupUi(QMainWindow *adminportal)
    {
        if (adminportal->objectName().isEmpty())
            adminportal->setObjectName(QString::fromUtf8("adminportal"));
        adminportal->resize(640, 480);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/SVG/monitor.svg"), QSize(), QIcon::Normal, QIcon::Off);
        adminportal->setWindowIcon(icon);
        adminportal->setStyleSheet(QString::fromUtf8("QHeaderView::section {\n"
"    background-color: rgb(199, 199, 199);\n"
"    color: black;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"}\n"
"\n"
"QHeaderView::section:checked\n"
"{\n"
"    background-color: ;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"QTableView {\n"
"    selection-background-color: ;\n"
"}\n"
"\n"
"QTableView QTableCornerButton::section {\n"
"    background: ;\n"
"    border: 2px outset rgb(255, 255, 255);\n"
"}\n"
"\n"
"QTableView::indicator:unchecked {\n"
"    background-color: #d7d6d5\n"
"}\n"
"\n"
"QToolBar {\n"
"    background: rgb(143, 143, 143);\n"
"    spacing: 4px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QToolBox::tab {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"    border-radius: 4px;\n"
"    color: lightgray;\n"
"}\n"
"\n"
"QToolBox::tab:selected { /* italicize selected tabs */\n"
"   "
                        " font: italic;\n"
"    color: white;\n"
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
""));
        actionBookings = new QAction(adminportal);
        actionBookings->setObjectName(QString::fromUtf8("actionBookings"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/SVG/wallet.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionBookings->setIcon(icon1);
        actionEmployees = new QAction(adminportal);
        actionEmployees->setObjectName(QString::fromUtf8("actionEmployees"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/SVG/user-group.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionEmployees->setIcon(icon2);
        actionAirports = new QAction(adminportal);
        actionAirports->setObjectName(QString::fromUtf8("actionAirports"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/SVG/checklist.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAirports->setIcon(icon3);
        actionSearcj = new QAction(adminportal);
        actionSearcj->setObjectName(QString::fromUtf8("actionSearcj"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/SVG/search.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSearcj->setIcon(icon4);
        actionEdit = new QAction(adminportal);
        actionEdit->setObjectName(QString::fromUtf8("actionEdit"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/SVG/document-edit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionEdit->setIcon(icon5);
        actionRefresh = new QAction(adminportal);
        actionRefresh->setObjectName(QString::fromUtf8("actionRefresh"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/SVG/clockwise.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefresh->setIcon(icon6);
        centralwidget = new QWidget(adminportal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 611, 381));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Semilight")});
        tableView->setFont(font);
        doneBtn = new QPushButton(centralwidget);
        doneBtn->setObjectName(QString::fromUtf8("doneBtn"));
        doneBtn->setGeometry(QRect(530, 400, 84, 25));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Source Code Pro")});
        font1.setPointSize(10);
        font1.setBold(true);
        doneBtn->setFont(font1);
        addRow = new QPushButton(centralwidget);
        addRow->setObjectName(QString::fromUtf8("addRow"));
        addRow->setGeometry(QRect(180, 400, 84, 25));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Tw Cen MT Condensed Extra Bold")});
        font2.setPointSize(11);
        addRow->setFont(font2);
        addRow->setStyleSheet(QString::fromUtf8(""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/SVG/plus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        addRow->setIcon(icon7);
        deleteRow = new QPushButton(centralwidget);
        deleteRow->setObjectName(QString::fromUtf8("deleteRow"));
        deleteRow->setGeometry(QRect(270, 400, 84, 25));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Tw Cen MT Condensed Extra Bold")});
        font3.setPointSize(10);
        deleteRow->setFont(font3);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/SVG/minus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        deleteRow->setIcon(icon8);
        tableLabel = new QLabel(centralwidget);
        tableLabel->setObjectName(QString::fromUtf8("tableLabel"));
        tableLabel->setGeometry(QRect(10, 400, 151, 21));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Rockwell")});
        font4.setPointSize(15);
        tableLabel->setFont(font4);
        adminportal->setCentralWidget(centralwidget);
        toolBar = new QToolBar(adminportal);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        adminportal->addToolBar(Qt::BottomToolBarArea, toolBar);

        toolBar->addAction(actionBookings);
        toolBar->addAction(actionEmployees);
        toolBar->addAction(actionAirports);
        toolBar->addSeparator();
        toolBar->addAction(actionSearcj);
        toolBar->addSeparator();
        toolBar->addAction(actionEdit);
        toolBar->addAction(actionRefresh);

        retranslateUi(adminportal);

        QMetaObject::connectSlotsByName(adminportal);
    } // setupUi

    void retranslateUi(QMainWindow *adminportal)
    {
        adminportal->setWindowTitle(QCoreApplication::translate("adminportal", "Admin Portal", nullptr));
        actionBookings->setText(QCoreApplication::translate("adminportal", "Bookings", nullptr));
        actionEmployees->setText(QCoreApplication::translate("adminportal", "Employees", nullptr));
        actionAirports->setText(QCoreApplication::translate("adminportal", "Airports", nullptr));
        actionSearcj->setText(QCoreApplication::translate("adminportal", "Search", nullptr));
        actionEdit->setText(QCoreApplication::translate("adminportal", "Edit", nullptr));
        actionRefresh->setText(QCoreApplication::translate("adminportal", "Refresh", nullptr));
        doneBtn->setText(QCoreApplication::translate("adminportal", "Done", nullptr));
        addRow->setText(QCoreApplication::translate("adminportal", "Add", nullptr));
        deleteRow->setText(QCoreApplication::translate("adminportal", "Delete", nullptr));
        tableLabel->setText(QCoreApplication::translate("adminportal", "TextLabel", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("adminportal", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminportal: public Ui_adminportal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPORTAL_H
