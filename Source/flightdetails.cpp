#include "flightdetails.h"
#include "ui_flightdetails.h"

flightDetails::flightDetails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::flightDetails)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(1);


}

flightDetails::~flightDetails()
{
    delete ui;
}

void flightDetails::setFlightLabels(int pr, QString dt, QString cr, QString fr, QString to)
{
    ui->fromLabel->setText(fr);
    ui->toLabel->setText(to);

    qInfo()<<pr<<dt<<cr<<fr<<to;
    ui->carrierName->setText(cr);
    /*if(!dt.isNull())
        dt=dt.sliced(0,10);*/
    ui->date->setText(dt);

    ui->priceLabel->setText(QString::number(pr));

    if(pr==0)
        ui->pushButton->setEnabled(false);
}


void flightDetails::on_pushButton_clicked()
{
    QSqlQuery qry;
    qry.prepare("INSERT INTO booking_details (first_name,last_name,date_of_birth,email,phone,payment,outbound,inbound,date,carrier,price)"
                "VALUES (:fn,:ln,:dob,:email,:phone,:pay,:out,:in,:dt,:carr,:pr)");//FROM and TO are keywords, cannot be used
    qry.bindValue(":fn",ui->firstName->text());
    qry.bindValue(":ln",ui->lastName->text());
    qry.bindValue(":dob",ui->dateEdit->text());
    qry.bindValue(":email",ui->email_ID->text());
    qry.bindValue(":phone",ui->phone->text());
    qry.bindValue(":pay",ui->payment->currentText());
    qry.bindValue(":out",ui->fromLabel->text());
    qry.bindValue(":in",ui->toLabel->text());
    qry.bindValue(":dt",ui->date->text());
    qry.bindValue(":carr",ui->carrierName->text());
    qry.bindValue(":pr",ui->priceLabel->text());

    if(!checkFields())
    {
        if(qry.exec())
        {
            ui->stackedWidget->setCurrentIndex(0);
        }
        else
        {
            qInfo()<<qry.lastError();
            QMessageBox::information(this,"Failed","Insertion Unsuccessful");
        }
        //QDialog::close();
    }
}

bool flightDetails::checkFields()
{
    bool flg = false;

    if (ui->lastName->text().isEmpty())
    {
        ui->label_12->setText("Required");
        flg = true;
    }

    else
        ui->label_12->setText("");

    if (ui->firstName->text().isEmpty())
    {
        ui->label_11->setText("Required");
        flg = true;
    }

    else
        ui->label_11->setText("");

    if (ui->email_ID->text().isEmpty())
    {
        ui->label_13->setText("Required");
        flg = true;
    }

    else
        ui->label_13->setText("");

    if (ui->phone->text().isEmpty())
    {
        ui->label_14->setText("Required");
        flg = true;
    }

    else
        ui->label_14->setText("");

    qInfo()<<ui->lastName->text().isEmpty();
    qInfo()<<flg;
    return flg;
}


void flightDetails::on_pushButton_2_clicked()
{
    QDialog::close();
}

