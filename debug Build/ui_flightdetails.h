/********************************************************************************
** Form generated from reading UI file 'flightdetails.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLIGHTDETAILS_H
#define UI_FLIGHTDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_flightDetails
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_15;
    QLabel *label_16;
    QWidget *widget;
    QPushButton *pushButton_2;
    QWidget *page_2;
    QPushButton *pushButton;
    QLabel *label_7;
    QLabel *carrierName;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QLabel *fromLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *dateTime_2;
    QLabel *priceLabel;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label;
    QLabel *date;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *email_ID;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *firstName;
    QLabel *label_11;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QLabel *toLabel;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *phone;
    QComboBox *payment;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *lastName;

    void setupUi(QDialog *flightDetails)
    {
        if (flightDetails->objectName().isEmpty())
            flightDetails->setObjectName(QString::fromUtf8("flightDetails"));
        flightDetails->resize(640, 574);
        flightDetails->setStyleSheet(QString::fromUtf8("#flightDetails{\n"
"\n"
"border-image:url(:/imagesMain/flightImage.jpg);\n"
"\n"
"}\n"
"\n"
"QLabel{\n"
"\n"
"color:black;\n"
"\n"
"}"));
        stackedWidget = new QStackedWidget(flightDetails);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 10, 621, 561));
        stackedWidget->setStyleSheet(QString::fromUtf8("#stackeWidget{\n"
"\n"
"background:rgba(0,0,0,0);\n"
"\n"
"}"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_15 = new QLabel(page);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(180, 0, 261, 121));
        QFont font;
        font.setFamilies({QString::fromUtf8("Pastelle DEMO")});
        font.setPointSize(35);
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(page);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(30, 400, 431, 131));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Rage Italic")});
        font1.setPointSize(25);
        font1.setItalic(false);
        label_16->setFont(font1);
        widget = new QWidget(page);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 160, 521, 291));
        widget->setStyleSheet(QString::fromUtf8("#widget{\n"
"\n"
"border-image:url(:/imagesMain/plane.png);\n"
"\n"
"}"));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(520, 520, 80, 25));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        pushButton = new QPushButton(page_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 510, 131, 41));
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(80, 450, 131, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("OCR A Extended")});
        font2.setPointSize(10);
        label_7->setFont(font2);
        carrierName = new QLabel(page_2);
        carrierName->setObjectName(QString::fromUtf8("carrierName"));
        carrierName->setGeometry(QRect(200, 10, 231, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Poor Richard")});
        font3.setPointSize(18);
        carrierName->setFont(font3);
        carrierName->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(page_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 50, 201, 91));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Nirmala UI")});
        font4.setPointSize(10);
        label_8->setFont(font4);

        horizontalLayout->addWidget(label_8);

        fromLabel = new QLabel(layoutWidget);
        fromLabel->setObjectName(QString::fromUtf8("fromLabel"));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Nirmala UI")});
        font5.setPointSize(9);
        font5.setBold(true);
        fromLabel->setFont(font5);
        fromLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(fromLabel);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        dateTime_2 = new QLabel(layoutWidget);
        dateTime_2->setObjectName(QString::fromUtf8("dateTime_2"));
        dateTime_2->setFont(font4);

        horizontalLayout_2->addWidget(dateTime_2);

        priceLabel = new QLabel(layoutWidget);
        priceLabel->setObjectName(QString::fromUtf8("priceLabel"));
        priceLabel->setFont(font5);
        priceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(priceLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font4);

        horizontalLayout_9->addWidget(label);

        date = new QLabel(layoutWidget);
        date->setObjectName(QString::fromUtf8("date"));
        date->setFont(font5);
        date->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(date);


        verticalLayout->addLayout(horizontalLayout_9);

        label_12 = new QLabel(page_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(510, 250, 81, 21));
        label_12->setStyleSheet(QString::fromUtf8("#label_12{\n"
"\n"
"color:red;\n"
"\n"
"}"));
        label_13 = new QLabel(page_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(510, 360, 81, 21));
        label_13->setStyleSheet(QString::fromUtf8("#label_13{\n"
"\n"
"color:red;\n"
"\n"
"}"));
        label_14 = new QLabel(page_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(510, 400, 81, 21));
        label_14->setStyleSheet(QString::fromUtf8("#label_14{\n"
"\n"
"color:red;\n"
"\n"
"}"));
        layoutWidget1 = new QWidget(page_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(80, 360, 421, 26));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        horizontalLayout_7->addWidget(label_5);

        email_ID = new QLineEdit(layoutWidget1);
        email_ID->setObjectName(QString::fromUtf8("email_ID"));

        horizontalLayout_7->addWidget(email_ID);

        layoutWidget2 = new QWidget(page_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(80, 210, 421, 26));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);

        horizontalLayout_4->addWidget(label_2);

        firstName = new QLineEdit(layoutWidget2);
        firstName->setObjectName(QString::fromUtf8("firstName"));

        horizontalLayout_4->addWidget(firstName);

        label_11 = new QLabel(page_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(510, 210, 81, 21));
        label_11->setStyleSheet(QString::fromUtf8("#label_11{\n"
"\n"
"color:red;\n"
"\n"
"}"));
        layoutWidget3 = new QWidget(page_2);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(340, 50, 181, 27));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font4);

        horizontalLayout_3->addWidget(label_9);

        toLabel = new QLabel(layoutWidget3);
        toLabel->setObjectName(QString::fromUtf8("toLabel"));
        toLabel->setFont(font5);

        horizontalLayout_3->addWidget(toLabel);

        layoutWidget4 = new QWidget(page_2);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(80, 400, 421, 26));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);

        horizontalLayout_8->addWidget(label_6);

        phone = new QLineEdit(layoutWidget4);
        phone->setObjectName(QString::fromUtf8("phone"));

        horizontalLayout_8->addWidget(phone);

        payment = new QComboBox(page_2);
        payment->addItem(QString());
        payment->addItem(QString());
        payment->addItem(QString());
        payment->addItem(QString());
        payment->setObjectName(QString::fromUtf8("payment"));
        payment->setGeometry(QRect(220, 450, 75, 24));
        layoutWidget5 = new QWidget(page_2);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(80, 310, 251, 27));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        horizontalLayout_6->addWidget(label_4);

        dateEdit = new QDateEdit(layoutWidget5);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_6->addWidget(dateEdit);

        layoutWidget6 = new QWidget(page_2);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(80, 250, 421, 26));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget6);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);

        horizontalLayout_5->addWidget(label_3);

        lastName = new QLineEdit(layoutWidget6);
        lastName->setObjectName(QString::fromUtf8("lastName"));

        horizontalLayout_5->addWidget(lastName);

        stackedWidget->addWidget(page_2);

        retranslateUi(flightDetails);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(flightDetails);
    } // setupUi

    void retranslateUi(QDialog *flightDetails)
    {
        flightDetails->setWindowTitle(QCoreApplication::translate("flightDetails", "Flight Details", nullptr));
        label_15->setText(QCoreApplication::translate("flightDetails", "Booking Confirmed", nullptr));
        label_16->setText(QCoreApplication::translate("flightDetails", "Thank you for choosing us. \n"
"Happy Travels!", nullptr));
        pushButton_2->setText(QCoreApplication::translate("flightDetails", "Home", nullptr));
        pushButton->setText(QCoreApplication::translate("flightDetails", "Confirm Booking", nullptr));
        label_7->setText(QCoreApplication::translate("flightDetails", "Payment mode", nullptr));
        carrierName->setText(QCoreApplication::translate("flightDetails", "Airline", nullptr));
        label_8->setText(QCoreApplication::translate("flightDetails", "From:", nullptr));
        fromLabel->setText(QCoreApplication::translate("flightDetails", "TextLabel", nullptr));
        dateTime_2->setText(QCoreApplication::translate("flightDetails", "Ticket Fare:", nullptr));
        priceLabel->setText(QCoreApplication::translate("flightDetails", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("flightDetails", "Date:", nullptr));
        date->setText(QCoreApplication::translate("flightDetails", "TextLabel", nullptr));
        label_12->setText(QString());
        label_13->setText(QString());
        label_14->setText(QString());
        label_5->setText(QCoreApplication::translate("flightDetails", "E-mail ID:   ", nullptr));
        label_2->setText(QCoreApplication::translate("flightDetails", "First Name:  ", nullptr));
        label_11->setText(QString());
        label_9->setText(QCoreApplication::translate("flightDetails", "To:", nullptr));
        toLabel->setText(QCoreApplication::translate("flightDetails", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("flightDetails", "Phone number:", nullptr));
        payment->setItemText(0, QCoreApplication::translate("flightDetails", "Visa", nullptr));
        payment->setItemText(1, QCoreApplication::translate("flightDetails", "MasterCard", nullptr));
        payment->setItemText(2, QCoreApplication::translate("flightDetails", "Net Banking", nullptr));
        payment->setItemText(3, QCoreApplication::translate("flightDetails", "e-Wallet", nullptr));

        label_4->setText(QCoreApplication::translate("flightDetails", "Date of Birth ", nullptr));
        label_3->setText(QCoreApplication::translate("flightDetails", "Last Name :  ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class flightDetails: public Ui_flightDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLIGHTDETAILS_H
