#include "htmlpage.h"

htmlPage::htmlPage(QObject *parent) :
    QObject(parent)
{
    title = nullptr;
    url = nullptr;
    keywords = QStringList(nullptr);
}

void htmlPage::setTitle(QString newTitle)
{
    title = newTitle;
}

void htmlPage::setUrl(QUrl newUrl)
{
    url = newUrl;
}

void htmlPage::addKeywords(QString newKeyword)
{
    keywords << newKeyword;
}

void htmlPage::addKeywords(QStringList newKeywords)
{
    keywords << newKeywords;
}

QString htmlPage::getTitle()
{
    return title;
}

QUrl htmlPage::getUrl()
{
    return url;
}

QStringList htmlPage::getKeywords()
{
    return keywords;
}
