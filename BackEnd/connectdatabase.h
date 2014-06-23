#ifndef CONNECTDATABASE_H
#define CONNECTDATABASE_H
#include "QtSql/qsqldatabase.h"

class ConnectDatabase
{
private :

    bool isConnected;
public:
    ConnectDatabase(QSqlDatabase db);
    bool connetionOpen();
};

#endif // CONNECTDATABASE_H
