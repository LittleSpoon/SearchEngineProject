#ifndef INSERTROW_H
#define INSERTROW_H
#include <QCoreApplication>
#include <QString>
#include <QObject>
#include "connectdatabase.h"
#include "htmlpage.h"

class InsertRow : public QObject
{
     Q_OBJECT

    private :

        QString sqlQuery;

    public:
         explicit InsertRow(QObject *parent = 0);
        InsertRow();

        void insertNewRow(QString sqlQuery);

    private slots:

        void convertHtmlPageIntoSqlQuery(htmlPage *query);
};

#endif // INSERTROW_H
