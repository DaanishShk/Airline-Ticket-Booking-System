#include "requesthttp.h"

requestHTTP::requestHTTP(QObject *parent) : QObject(parent)
{
    connect(&manager,&QNetworkAccessManager::authenticationRequired,this,&requestHTTP::authenticationRequired);
    connect(&manager,&QNetworkAccessManager::encrypted,this,&requestHTTP::encrypted);
    connect(&manager,&QNetworkAccessManager::preSharedKeyAuthenticationRequired,this,&requestHTTP::preSharedKeyAuthenticationRequired);
    connect(&manager,&QNetworkAccessManager::proxyAuthenticationRequired,this,&requestHTTP::proxyAuthenticationRequired);
    connect(&manager,&QNetworkAccessManager::sslErrors,this,&requestHTTP::sslErrors);
}

void requestHTTP::get(QString information)
{
    qInfo()<<"Getting from server...";

    QNetworkReply* reply = manager.get(QNetworkRequest(QUrl(information)));
    connect(reply,&QNetworkReply::readyRead,this,&requestHTTP::readyRead);
//deleteLater() for reply must be done manually
}

void requestHTTP::post(QString location, QByteArray data)
{
    /*qInfo()<<"Posting from server...";
    QNetworkRequest request = QNetworkRequest(QUrl(information));
    request.setHeader(QNetworkRequest::ContentTypeHeader,"text/plain");
    QNetworkReply* reply = manager.post(request, data);
    connect(reply,&QNetworkReply::readyRead,this,&requestHTTP::readyRead);*/

    /*const QUrl url(QStringLiteral("https://partners.api.skyscanner.net/apiservices/pricing/v1.0"));//replace with api key
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

    QJsonObject obj;
    obj["country"] = "IN";
    obj["currency"] = "INR";
    obj["locale"] = "en-GB";
    obj["originPlace"] = "BOM";
    obj["destinationPlace"] = "DXB";
    obj["outboundDate"] = "2021-07-21";
    obj["adults"] = 1;

    QJsonDocument doc(obj);
    data = doc.toJson();
    qInfo()<<data;
    QNetworkReply* reply = manager.post(request, data);
    connect(reply,&QNetworkReply::readyRead,this,&requestHTTP::readyRead);*/
}

void requestHTTP::readyRead()
{
    qInfo()<<"ReadyRead";

    QNetworkReply* reply = qobject_cast<QNetworkReply*>(sender());
    //if(reply) qInfo() << reply->readAll();
    QJsonDocument document = QJsonDocument::fromJson(reply->readAll());
    qInfo()<<document;//isNull() to check validity of parsed json

    QJsonObject jObj = document.object();
    QJsonValue jval;

    jval = jObj["Quotes"];
    qInfo()<<jval;
    price = jval[0]["MinPrice"].toInteger();
    /*qInfo()<<price;
    quoteDateTime = QString(jval[0]["QuoteDateTime"].toString());*/

    jval = jObj["Carriers"];
    carrier = QString(jval[0]["Name"].toString());

    if(price==0)
    {
        carrier = jObj["message"].toString();
        if(carrier.isEmpty())
        {
            carrier = "No Flight Found";
        }
        qInfo()<<carrier;
        qInfo()<<"Set API settings";
    }

    rdialog->enableButton();

    /*QStringList propertyNames;
    QStringList propertyKeys;
    QString strReply = (QString)reply->readAll();
    QJsonDocument jsonResponse = QJsonDocument::fromJson(strReply.toUtf8());
    QJsonObject jsonObject = jsonResponse.object();
    QJsonArray jsonArray = jsonObject["properties"].toArray();*/


}

void requestHTTP::authenticationRequired(QNetworkReply *reply, QAuthenticator *authenticator)
{
    qInfo()<<"Authenticate";
}

void requestHTTP::encrypted(QNetworkReply *reply)
{
    qInfo()<<"Encrypt";
}

void requestHTTP::finished(QNetworkReply *reply)
{
    qInfo()<<"Finished";
}

void requestHTTP::preSharedKeyAuthenticationRequired(QNetworkReply *reply, QSslPreSharedKeyAuthenticator *authenticator)
{
    qInfo()<<"preSharedKey";
}

void requestHTTP::proxyAuthenticationRequired(const QNetworkProxy &proxy, QAuthenticator *authenticator)
{
    qInfo()<<"ProxyAuthenticate";
}

void requestHTTP::sslErrors(QNetworkReply *reply, const QList<QSslError> &errors)
{
    qInfo()<<"ssl";
}
