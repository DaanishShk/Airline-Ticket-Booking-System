#include "apisettings.h"
#include "ui_apisettings.h"

apiSettings::apiSettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::apiSettings)
{
    ui->setupUi(this);

}

apiSettings::~apiSettings()
{
    delete ui;
}

void apiSettings::on_pushButton_clicked()
{
    qDebug()<<region<<currency<<locale;
    region = ui->region->text();
    currency = ui->currency->text();
    locale = ui->locale->text();
    apiKey = ui->apiKey->text();
    qDebug()<<region<<currency<<locale;
    QDialog::close();
}

