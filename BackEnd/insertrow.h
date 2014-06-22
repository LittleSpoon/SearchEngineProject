#ifndef INSERTROW_H
#define INSERTROW_H
#include <QCoreApplication>
#include <QString>
#include <QObject>
#include "connectdatabase.h"

class InsertRow : public QObject
{
     Q_OBJECT

    private :

        QString SqlQuery;

    public:
         explicit InsertRow(QObject *parent = 0);
        InsertRow();

        void InsertNewRow();

    private slots:

        void SetQuery(QString SqlQueryToInsert);
};

#endif // INSERTROW_H
