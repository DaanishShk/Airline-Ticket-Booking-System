#include "settingsdialog.h"
#include "ui_settingsdialog.h"

settingsDialog::settingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settingsDialog)
{
    ui->setupUi(this);

}

settingsDialog::~settingsDialog()
{
    delete ui;
}


void settingsDialog::on_pushButton_clicked()
{
    qDebug()<<host<<user<<password<<db;
    host = ui->host->text();
    user = ui->user->text();
    password = ui->password->text();
    db = ui->database->text();
    qDebug()<<host<<user<<password<<db;
    QDialog::close();
    //flg = true;
}




