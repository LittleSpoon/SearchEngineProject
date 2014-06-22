#ifndef DOWNLOAD_H
#define DOWNLOAD_H

#include <QObject>
#include <QtNetwork>
#include <QString>


class download : public QObject
{
    Q_OBJECT
public:
    explicit download(QObject *parent = 0);
    QString getData();
    void downloadNewPage(QUrl pageUrl);

private:
    QByteArray downloadedData;
    QNetworkAccessManager access;

signals:
    void downloaded();

protected slots:
    void fileDownloaded(QNetworkReply* reply);
};

#endif // DOWNLOAD_H
