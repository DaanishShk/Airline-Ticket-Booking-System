#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setPassword("");
    database.setDatabaseName("airline_info");
    database.open();
    //qDebug()<<database.isOpen();
    settings = new settingsDialog(this); //Do not create new object after this, contents will be different
    apiSet = new apiSettings(this);

    setAirportCombobox();

}

MainWindow::~MainWindow()
{
    delete ui;
    delete settings;
    delete apiSet;
}

void MainWindow::setConnections(QString host, QString user, QString password, QString db)
{
    qDebug()<<database.isOpen();
    //database = QSqlDatabase::addDatabase("MYSQL");
    database.close();
    qDebug()<<host<<user<<password<<db;
    database.setHostName(host);
    database.setUserName(user);
    database.setPassword(password);
    database.setDatabaseName(db);
    database.open();
    qDebug()<<database.isOpen();
    qDebug()<<"Executed setConnection function";

    setAirportCombobox();
}



void MainWindow::flightDialog(int pr, QString dt, QString cr)
{
    flightDetails *fdetails = new flightDetails(this);

    fdetails->setFlightLabels(pr ,dt, cr, ui->departureCBox->currentText(), ui->departureCBox_2->currentText());

    fdetails->setModal(true);

    fdetails->exec();
    fdetails->deleteLater();
}

void MainWindow::setAirportCombobox()
{
    QSqlQuery query("SELECT * FROM airport ORDER BY location");
        while (query.next()) {
            QString data = query.value(0).toString()+" ("+query.value(1).toString()+")";
            if(ui->departureCBox->findText(data)==-1)
            {
                ui->departureCBox->addItem(data);
                ui->departureCBox_2->addItem(data);
            }
        }

   ui->departureCBox_2->setCurrentIndex(2);
}

QString MainWindow::prepareUrl()
{
    QString url = "https://partners.api.skyscanner.net/apiservices/browsequotes/v1.0/";
    url += apiSet->region+"/"+apiSet->currency+"/"+apiSet->locale+"/";
    url += ui->departureCBox->currentText().last(4).sliced(0,3)+"/"+ui->departureCBox_2->currentText().last(4).sliced(0,3)+"/";
    url += ui->calendarWidget->selectedDate().toString("yyyy-MM-dd")+"?";
    url += "apiKey="+apiSet->apiKey;
    return url;
          //  example url--"https://partners.api.skyscanner.net/apiservices/browsequotes/v1.0/IN/INR/en-GB/BOM/DXB/2021-07-21?apiKey=YourAPIkey"
}




void MainWindow::on_actionStatus_triggered()
{
    if(database.isOpen())
    {
        QMessageBox::information(this, "Connected","Database connection is active");
    }
    else
    {
        QMessageBox::information(this, "Not Connected","Please check connection settings");
    }
}


void MainWindow::on_actionSettings_triggered()
{
    //qDebug()<<database.isOpen();
    settings->setModal(true);
    //no need to pass pointer
    settings->exec();//execution does not proceed until window is closed (Very important)
    //qDebug()<<database.isOpen();
    /*if(!settings->flg)
        return;*/

    setConnections(settings->host, settings->user, settings->password, settings->db);
}


void MainWindow::on_calendarWidget_clicked(const QDate &date)
{
    selectedDate = date.toString();
    qDebug()<<selectedDate;
}


void MainWindow::on_bookBtn_clicked()
{
    if(ui->departureCBox->currentText().compare(ui->departureCBox_2->currentText())==0)
    {
        QMessageBox::information(this, "","Same outbound & inbound location selected");
        return;

    }
    requestHTTP req;
    qInfo()<<prepareUrl();
    QString stringSend = prepareUrl();
    req.get(stringSend);//if failed window should not be displayed

    responseWaitDialog waitDialog;
    req.rdialog =&waitDialog;     //passing pointer to processing dialog for enabling continue button
    waitDialog.exec();
    waitDialog.deleteLater();
    req.deleteLater();

    flightDialog(req.price,ui->calendarWidget->selectedDate().toString("yyyy-MM-dd"),req.carrier);
}


void MainWindow::on_actionAdmin_Login_triggered()
{
    bool ok;
        QString adminpass = QInputDialog::getText(this, "",
                                             "Enter password:", QLineEdit::Password,
                                             "", &ok);

        if(!ok)
        {
            qInfo()<<"Closed";
            return;
        }

        else if(adminpass.isEmpty())
        {
            qInfo()<<"Nothing entered";
            QMessageBox::information(this, "Authentication Failure","Nothing was entered");
            return;
        }

    adminportal *aportal = new adminportal();

    if(aportal->checkAcessLevel(adminpass)==-1)
    {
        qInfo()<<"Wrong entered";
        QMessageBox::information(this, "Authentication Failure","Wrong password entered");
        return;
    }


    aportal->show();
}


void MainWindow::on_actionAPI_Setting_triggered()
{
    apiSet->setModal(true);
    apiSet->exec();
}


void MainWindow::on_actionVersion_triggered()
{
    QMessageBox::aboutQt(this);
}


void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::about(this,"","This is an airline ticket reservation system project to book flights and manage booking and employee data. The aim of the project "
                       "is to provide an airline ticktet booking company with a booking and management software for their operations. The flight details and information "
                       "will be provided by connecting to an API service and all the booking data will be stored in a MySQL database stored locally for "
                       "future references or editing. The program is written in C++ and the GUI was built with the help of libraries provided by the Qt framework"
                       "\n\nBy Mohammad Daanish Shaikh\ngithub profile:https://github.com/DaanishShk");
}

