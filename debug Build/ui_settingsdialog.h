/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_settingsDialog
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *host;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *user;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *password;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *database;
    QPushButton *pushButton;

    void setupUi(QDialog *settingsDialog)
    {
        if (settingsDialog->objectName().isEmpty())
            settingsDialog->setObjectName(QString::fromUtf8("settingsDialog"));
        settingsDialog->resize(320, 240);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/SVG/gear.svg"), QSize(), QIcon::Normal, QIcon::Off);
        settingsDialog->setWindowIcon(icon);
        settingsDialog->setStyleSheet(QString::fromUtf8("QLabel {\n"
"\n"
"color:rgb(0, 0, 0)\n"
"\n"
"}"));
        groupBox = new QGroupBox(settingsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 0, 281, 201));
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

        host = new QLineEdit(groupBox);
        host->setObjectName(QString::fromUtf8("host"));

        horizontalLayout->addWidget(host);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        user = new QLineEdit(groupBox);
        user->setObjectName(QString::fromUtf8("user"));

        horizontalLayout_2->addWidget(user);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        password = new QLineEdit(groupBox);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(password);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        database = new QLineEdit(groupBox);
        database->setObjectName(QString::fromUtf8("database"));

        horizontalLayout_4->addWidget(database);


        verticalLayout->addLayout(horizontalLayout_4);

        pushButton = new QPushButton(settingsDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 210, 80, 25));
        QFont font1;
        font1.setPointSize(10);
        pushButton->setFont(font1);

        retranslateUi(settingsDialog);

        QMetaObject::connectSlotsByName(settingsDialog);
    } // setupUi

    void retranslateUi(QDialog *settingsDialog)
    {
        settingsDialog->setWindowTitle(QCoreApplication::translate("settingsDialog", "Settings", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("settingsDialog", "    Host    ", nullptr));
        label_2->setText(QCoreApplication::translate("settingsDialog", "    User    ", nullptr));
        label_3->setText(QCoreApplication::translate("settingsDialog", "Password", nullptr));
        label_4->setText(QCoreApplication::translate("settingsDialog", "Database", nullptr));
        pushButton->setText(QCoreApplication::translate("settingsDialog", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settingsDialog: public Ui_settingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
