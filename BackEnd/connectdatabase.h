#ifndef CONNECTDATABASE_H
#define CONNECTDATABASE_H
#include "QtSql/qsqldatabase.h"

class ConnectDatabase
{
private :

public:
    ConnectDatabase(QSqlDatabase);
    bool connetionOpen();
};

#endif // CONNECTDATABASE_H
