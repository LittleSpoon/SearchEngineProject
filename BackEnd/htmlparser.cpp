#include "htmlparser.h"

htmlParser::htmlParser(QUrl startUrl, QObject *parent) :
    QObject(parent)
{
    QObject::connect(&source, SIGNAL(downloaded()),
                     SLOT(htmldownloaded()));
    QObject::connect(this,SIGNAL(newUrlFound(QUrl)),
                     &source, SLOT(newDownload(QUrl)));
    QObject::connect(this,SIGNAL(parsingFinished(htmlPage*)),
                     &databaseTransaction, SLOT(newInsertQuery(htmlPage*)));

    source.downloadNewPage(startUrl);
}

void htmlParser::htmldownloaded()
{
   htmlData = source.getData();
}

QString htmlParser::extractContent(QString startTag, QString endTag)
{
    int lengthStartTag = startTag.length();
    int stringStart = htmlData.indexOf(startTag) + lengthStartTag;
    int stringLength = htmlData.indexOf(endTag) - stringStart ;

    return htmlData.mid(stringStart,stringLength);
}

QString htmlParser::removeSpeCha()
{

}

void htmlParser::searchUrl()
{
    QUrl newUrl = QUrl(this->extractContent("<a href=\"","\">"));
    emit newUrlFound(newUrl);
}
