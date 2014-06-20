#ifndef INSERTROW_H
#define INSERTROW_H
#include <QCoreApplication>
#include <QString>

#include "connectdatabase.h"

class InsertRow
{

    public:
        InsertRow(QString tableToChange, QString columnToChange1,QString columnToChange2 ,
                  QString valueToInsert1, QString valueToInsert2);
};

#endif // INSERTROW_H
