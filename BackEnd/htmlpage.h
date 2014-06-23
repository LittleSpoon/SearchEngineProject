#ifndef HTMLPAGE_H
#define HTMLPAGE_H

#include <QObject>
#include <QUrl>
#include <QStringList>

//This class contain just data to put in the database.

class htmlPage : public QObject
{
    Q_OBJECT
public:
    explicit htmlPage(QObject *parent = 0);
    void setTitle(QString newTitle);
    void setUrl(QUrl newUrl);
    void addKeywords(QString newKeyword);
    void addKeywords(QStringList newKeywords);
    QString getTitle();
    QUrl getUrl();
    QStringList getKeywords();

protected:
    QString title;
    QUrl url;
    QStringList keywords;

signals:

public slots:



};


#endif // HTMLPAGE_H
