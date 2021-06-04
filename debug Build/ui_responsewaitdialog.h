/********************************************************************************
** Form generated from reading UI file 'responsewaitdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESPONSEWAITDIALOG_H
#define UI_RESPONSEWAITDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_responseWaitDialog
{
public:
    QLabel *statusLabel;
    QPushButton *continueBtn;
    QWidget *widget;

    void setupUi(QDialog *responseWaitDialog)
    {
        if (responseWaitDialog->objectName().isEmpty())
            responseWaitDialog->setObjectName(QString::fromUtf8("responseWaitDialog"));
        responseWaitDialog->resize(320, 148);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/SVG/loading.svg"), QSize(), QIcon::Normal, QIcon::Off);
        responseWaitDialog->setWindowIcon(icon);
        responseWaitDialog->setStyleSheet(QString::fromUtf8("#responseWaitDialog{\n"
"\n"
"background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(70, 55,80, 150), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}"));
        statusLabel = new QLabel(responseWaitDialog);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setGeometry(QRect(20, 0, 281, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Nirmala UI")});
        font.setPointSize(10);
        font.setBold(false);
        statusLabel->setFont(font);
        statusLabel->setStyleSheet(QString::fromUtf8(""));
        statusLabel->setAlignment(Qt::AlignCenter);
        continueBtn = new QPushButton(responseWaitDialog);
        continueBtn->setObjectName(QString::fromUtf8("continueBtn"));
        continueBtn->setGeometry(QRect(210, 90, 80, 25));
        widget = new QWidget(responseWaitDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 40, 81, 91));
        widget->setStyleSheet(QString::fromUtf8("#widget{\n"
"\n"
"border-image:url(:/imagesMain/server.png);\n"
"\n"
"}"));

        retranslateUi(responseWaitDialog);

        QMetaObject::connectSlotsByName(responseWaitDialog);
    } // setupUi

    void retranslateUi(QDialog *responseWaitDialog)
    {
        responseWaitDialog->setWindowTitle(QCoreApplication::translate("responseWaitDialog", "Processing", nullptr));
        statusLabel->setText(QCoreApplication::translate("responseWaitDialog", "Retrieving information from server", nullptr));
        continueBtn->setText(QCoreApplication::translate("responseWaitDialog", "Continue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class responseWaitDialog: public Ui_responseWaitDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESPONSEWAITDIALOG_H
