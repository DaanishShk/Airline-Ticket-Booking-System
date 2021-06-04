#include "responsewaitdialog.h"
#include "ui_responsewaitdialog.h"

responseWaitDialog::responseWaitDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::responseWaitDialog)
{
    ui->setupUi(this);

    ui->continueBtn->setEnabled(false);
}

responseWaitDialog::~responseWaitDialog()
{
    delete ui;
}

void responseWaitDialog::enableButton()
{
    ui->continueBtn->setEnabled(true);
    qInfo()<<"Button has been enabled";
}



void responseWaitDialog::on_continueBtn_clicked()
{
    QDialog::close();
}

