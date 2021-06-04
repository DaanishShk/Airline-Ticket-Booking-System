#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>
/*#include <QtSql>
#include <QSqlDatabase>*/


namespace Ui {
class settingsDialog;
}

class settingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit settingsDialog(QWidget *parent = nullptr);
    ~settingsDialog();
 QString host, user, password, db;
 bool flg = false;

private slots:


 void on_pushButton_clicked();

private:
    Ui::settingsDialog *ui;

};

#endif // SETTINGSDIALOG_H
