#include <QCoreApplication>

#include <iostream>
#include "connectdatabase.h"
#include "insertrow.h"

#include "QtSql/qsqlquery.h"


InsertRow::InsertRow(QString tableToChange, QString columnToChange1 ,QString columnToChange2,
                     QString valueToInsert1, QString valueToInsert2)
{
    //On crée ,dans un QString , une requête sql à partir des arguments recus en paramètre :
    QString query = "INSERT INTO  " + tableToChange + "(" +columnToChange1 + ","+ columnToChange2+ ") VALUES(" + valueToInsert1 + ","+ valueToInsert2 +");";

    //Création d'un objet de requête :
    QSqlQuery newQuery;

    //on affiche la requete dans la console :
    std::cout <<query.toStdString()<<std::endl;


    //On teste si la requête a aboutie:

    if(newQuery.exec(query)){
        std::cout << "insertion reussie" <<std::endl;
    }
    else
    {
        std::cout << "votre insertion a rate" <<std::endl;
    }

}
