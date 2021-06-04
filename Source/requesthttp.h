#ifndef REQUESTHTTP_H
#define REQUESTHTTP_H

#include <QObject>
#include <QDebug>

#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QAuthenticator>
#include <QNetworkProxy>

#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>

#include "responsewaitdialog.h"


class requestHTTP : public QObject
{
    Q_OBJECT
public:
    explicit requestHTTP(QObject *parent = nullptr);
    int price;
    QString quoteDateTime;
    QString carrier;

    responseWaitDialog *rdialog;

signals:

public slots:
    void get(QString information);
    void post(QString information, QByteArray);


private slots:
    void readyRead();
    void authenticationRequired(QNetworkReply *reply, QAuthenticator *authenticator);
    void encrypted(QNetworkReply *reply);
    void finished(QNetworkReply *reply);
    void preSharedKeyAuthenticationRequired(QNetworkReply *reply, QSslPreSharedKeyAuthenticator *authenticator);
    void proxyAuthenticationRequired(const QNetworkProxy &proxy, QAuthenticator *authenticator);
    void sslErrors(QNetworkReply *reply, const QList<QSslError> &errors);



private:
    QNetworkAccessManager manager;

};

#endif // REQUESTHTTP_H
