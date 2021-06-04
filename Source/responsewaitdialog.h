#ifndef RESPONSEWAITDIALOG_H
#define RESPONSEWAITDIALOG_H

#include <QDialog>

namespace Ui {
class responseWaitDialog;
}

class responseWaitDialog : public QDialog
{
    Q_OBJECT

public:
    explicit responseWaitDialog(QWidget *parent = nullptr);
    ~responseWaitDialog();
    void enableButton();  //receives the enable signal from readyRead() in requestHTTP

private slots:
    void on_continueBtn_clicked();

private:
    Ui::responseWaitDialog *ui;

};

#endif // RESPONSEWAITDIALOG_H
