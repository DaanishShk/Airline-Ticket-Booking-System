#ifndef FLIGHTDETAILS_H
#define FLIGHTDETAILS_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>

#include "requesthttp.h"

namespace Ui {
class flightDetails;
}

class flightDetails : public QDialog
{
    Q_OBJECT

public:
    explicit flightDetails(QWidget *parent = nullptr);
    ~flightDetails();

    void setFlightLabels(int,QString,QString,QString,QString);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::flightDetails *ui;

    requestHTTP *req;  //To enable the continue button after response has been received

    bool checkFields();
};

#endif // FLIGHTDETAILS_H
