#ifndef APISETTINGS_H
#define APISETTINGS_H

#include <QDialog>

namespace Ui {
class apiSettings;
}

class apiSettings : public QDialog
{
    Q_OBJECT

public:
    explicit apiSettings(QWidget *parent = nullptr);
    ~apiSettings();

    QString region,currency,locale,apiKey;

private slots:
    void on_pushButton_clicked();

private:
    Ui::apiSettings *ui;
};

#endif // APISETTINGS_H
