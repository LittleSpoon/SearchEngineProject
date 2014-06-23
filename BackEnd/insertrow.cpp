#include <QCoreApplication>
#include <iostream>
#include "connectdatabase.h"
#include "insertrow.h"
#include "htmlparser.h"
#include "QtSql/qsqlquery.h"


//COnstructor :
InsertRow::InsertRow(QObject *parent)
{

    /*
   QObject::connect(SIGNAL(parsingFinished(htmlPage*)),
                         SLOT(convertHtmlPageIntoSqlQuery(htmlPage* query)));*/

    sqlQuery = "";
}

void InsertRow::insertNewRow(QString sqlQuery)
{





    //on affiche la requete dans la console :
    std::cout <<sqlQuery.toStdString()<<std::endl;

    //Création d'un objet de requête :
    QSqlQuery newQuery;


    //On teste si la requête a aboutie:

    if(newQuery.exec(sqlQuery)){
        std::cout << "insertion reussie" <<std::endl;
    }
    else
    {
        std::cout << "votre insertion a rate" <<std::endl;
    }
}

void InsertRow::convertHtmlPageIntoSqlQuery(htmlPage *query)
{

    //On crée ,dans un QString , une requête sql à partir des arguments recus en paramètre :
   sqlQuery = "INSERT INTO `websites`(`website`,`url`) VALUES(" + query->getTitle() + ","+ query->getUrl().toString() +");";

    insertNewRow(sqlQuery);
}
