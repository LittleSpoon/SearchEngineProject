#ifndef INSERTROW_H
#define INSERTROW_H
#include <QCoreApplication>
#include <QString>
#include <QObject>
#include <QVariant>
#include "htmlpage.h"
#include <iostream>
#include "connectdatabase.h"
#include "QtSql/qsqlquery.h"

class insertRow : public QObject
{
    Q_OBJECT

public:
    explicit insertRow(QObject *parent = 0);


    void insertNewRow(QString sqlQuery);

private :

    QString sqlQuery;




public slots:

    void newInsertQuery(htmlPage *query);
};

#endif // INSERTROW_H
