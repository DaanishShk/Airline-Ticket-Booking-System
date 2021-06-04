#ifndef ADMINPORTAL_H
#define ADMINPORTAL_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QInputDialog>

namespace Ui {
class adminportal;
}

class adminportal : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminportal(QWidget *parent = nullptr);
    ~adminportal();
int checkAcessLevel(QString);
private slots:
    void on_actionBookings_triggered();

    void on_actionEmployees_triggered();

    void on_actionAirports_triggered();

    void on_addRow_clicked();

    void on_deleteRow_clicked();

    void on_actionEdit_triggered();

    void on_actionRefresh_triggered();

    void on_actionSearcj_triggered();

    void on_doneBtn_clicked();

private:
    Ui::adminportal *ui;

    QSqlTableModel *tableModel;
    QString table_name;

    bool editStatus;

    int access;
    void setPortalOptions();

};

#endif // ADMINPORTAL_H
