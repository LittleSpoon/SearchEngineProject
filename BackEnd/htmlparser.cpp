#include "htmlparser.h"

htmlParser::htmlParser(QObject *parent) :
    QObject(parent)
{
    QObject::connect(&source, SIGNAL(downloaded()),
                     SLOT(htmldownloaded()));
    QObject::connect(this,SIGNAL(newUrlFound(QUrl)),
                     &source, SLOT(newDownload(QUrl)));

    QUrl url = QUrl("http://www.batoto.net/");

    source.downloadNewPage(url);
}

void htmlParser::htmldownloaded()
{
   htmlData = source.getData();
}

void htmlParser::extractContent(QString startTag, QString endTag)
{
    int lengthStartTag = startTag.length();
    int stringStart = htmlData.indexOf(startTag) + lengthStartTag;
    int stringLength = htmlData.indexOf(endTag) - stringStart ;

    htmlContent = htmlData.mid(stringStart,stringLength);

    return result;
}

QString htmlParser::removeSpeCha()
{

}

void htmlParser::searchUrl()
{
    extractContent();
}
