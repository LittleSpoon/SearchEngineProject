#include <QCoreApplication>

#include <iostream>
#include "connectdatabase.h"
#include "insertrow.h"

#include "QtSql/qsqlquery.h"


//COnstructor :
InsertRow::InsertRow(QObject *parent)
{

   QObject::connect(SLOT (InsertNewRow(QString)));

    SqlQuery = "";

}

void InsertNewRow(QString query)
{
    if(query != SqlQuery)
    {
        SqlQuery = query;
    }


    //on affiche la requete dans la console :
    std::cout <<query.toStdString()<<std::endl;

    //Création d'un objet de requête :
    QSqlQuery newQuery;


    //On teste si la requête a aboutie:

    if(newQuery.exec(query)){
        std::cout << "insertion reussie" <<std::endl;
    }
    else
    {
        std::cout << "votre insertion a rate" <<std::endl;
    }
}

void SetQuery(QString SqlQueryToInsert)
{
    InsertNewRow(SqlQueryToInsert);
}
