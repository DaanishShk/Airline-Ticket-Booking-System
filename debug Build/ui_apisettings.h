/********************************************************************************
** Form generated from reading UI file 'apisettings.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APISETTINGS_H
#define UI_APISETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_apiSettings
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *region;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *currency;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *locale;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *apiKey;
    QPushButton *pushButton;

    void setupUi(QDialog *apiSettings)
    {
        if (apiSettings->objectName().isEmpty())
            apiSettings->setObjectName(QString::fromUtf8("apiSettings"));
        apiSettings->resize(285, 251);
        apiSettings->setStyleSheet(QString::fromUtf8("QLabel {\n"
"\n"
"color:rgb(0, 0, 0)\n"
"\n"
"}"));
        groupBox = new QGroupBox(apiSettings);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 281, 201));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font.setPointSize(10);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        region = new QLineEdit(groupBox);
        region->setObjectName(QString::fromUtf8("region"));

        horizontalLayout->addWidget(region);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        currency = new QLineEdit(groupBox);
        currency->setObjectName(QString::fromUtf8("currency"));

        horizontalLayout_2->addWidget(currency);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        locale = new QLineEdit(groupBox);
        locale->setObjectName(QString::fromUtf8("locale"));
        locale->setEchoMode(QLineEdit::Normal);

        horizontalLayout_3->addWidget(locale);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        apiKey = new QLineEdit(groupBox);
        apiKey->setObjectName(QString::fromUtf8("apiKey"));
        apiKey->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(apiKey);


        verticalLayout->addLayout(horizontalLayout_4);

        pushButton = new QPushButton(apiSettings);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 210, 80, 25));
        QFont font1;
        font1.setPointSize(10);
        pushButton->setFont(font1);

        retranslateUi(apiSettings);

        QMetaObject::connectSlotsByName(apiSettings);
    } // setupUi

    void retranslateUi(QDialog *apiSettings)
    {
        apiSettings->setWindowTitle(QCoreApplication::translate("apiSettings", "API Settings", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("apiSettings", " Region  ", nullptr));
        label_2->setText(QCoreApplication::translate("apiSettings", "Currency", nullptr));
        label_3->setText(QCoreApplication::translate("apiSettings", "  Locale  ", nullptr));
        label_4->setText(QCoreApplication::translate("apiSettings", " API Key ", nullptr));
        pushButton->setText(QCoreApplication::translate("apiSettings", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class apiSettings: public Ui_apiSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APISETTINGS_H
