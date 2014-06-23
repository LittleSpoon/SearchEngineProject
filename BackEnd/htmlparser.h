#ifndef HTMLPARSER_H
#define HTMLPARSER_H

#include <QObject>
#include <QUrl>
#include <QString>
#include "download.h"
#include "htmlpage.h"

class htmlParser : public QObject
{
    Q_OBJECT
public:
    explicit htmlParser(QObject *parent = 0);
    QString htmlData;
    download source;
    htmlPage Data;

protected:
    void extractContent(QString startTag, QString endTag);
    QString htmlContent;
    QString removeSpeCha();

signals:
    void parsingFinished(htmlPage *);
    void newUrlFound(QUrl newUrl);

public slots:
    void htmldownloaded();
};

#endif // HTMLPARSER_H
