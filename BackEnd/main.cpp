#include <QCoreApplication>
#include <QUrl>
#include "htmlparser.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QUrl startUrl = QUrl("http://gateau.spoons.com");
    htmlParser start(startUrl);

    return a.exec();
}
