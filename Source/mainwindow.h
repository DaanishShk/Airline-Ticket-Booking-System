#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>       //For SQL queries and handling
#include <QMessageBox>              //to display message boxes
#include <QDebug>                   //To help identify flaws in logic
#include <QInputDialog>


#include "settingsdialog.h"
#include "flightdetails.h"
#include "requesthttp.h"
#include "responsewaitdialog.h"
#include "adminportal.h"
#include "apisettings.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:

private slots:

    void on_actionStatus_triggered();

    void on_actionSettings_triggered();

    void on_calendarWidget_clicked(const QDate &date);


    void on_bookBtn_clicked();

    void on_actionAdmin_Login_triggered();

    void on_actionAPI_Setting_triggered();

    void on_actionVersion_triggered();

    void on_actionAbout_triggered();

private:
    Ui::MainWindow *ui;

    QSqlDatabase database;
    QSqlTableModel *tablemodel;

    QNetworkAccessManager manager;

    settingsDialog *settings;
    apiSettings *apiSet;
    QString selectedDate;

    void setConnections(QString, QString, QString, QString);   //For re-establishing database connection
    void flightDialog(int, QString, QString);               //Pass flight details for display on the booking dialog
    void setAirportCombobox();                              //Add the airport list from the database

    QString prepareUrl();                                   //returns string that will be used in the get request

  //for form dialog interaction
};
#endif // MAINWINDOW_H
