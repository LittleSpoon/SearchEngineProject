#include "download.h"


download::download(QObject *parent) :
    QObject(parent)
{
    QObject::connect(&access, SIGNAL(finished(QNetworkReply*)),
            SLOT(fileDownloaded(QNetworkReply*)));

}


QString download::getData()
{
    QString result = QString(downloadedData);
    return result;
}

void download::downloadNewPage(QUrl pageUrl)
{
    QNetworkRequest request(pageUrl);
    access.get(request);
}

void download::fileDownloaded(QNetworkReply *reply)
{
    downloadedData = reply->readAll();
    reply->deleteLater();
    emit downloaded();
}

void download::newDownload(QUrl newUrl)
{
    this->downloadNewPage(newUrl);
}
