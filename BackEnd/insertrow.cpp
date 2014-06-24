
#include "insertrow.h"



//COnstructor :
insertRow::insertRow(QObject *parent):
    QObject(parent)
{

    /*
   QObject::connect(SIGNAL(parsingFinished(htmlPage*)),
                         SLOT(convertHtmlPageIntoSqlQuery(htmlPage* query)));*/

    sqlQuery = "";
    QSqlDatabase db;
    ConnectDatabase connection(db);

}

void insertRow::insertNewRow(QString sqlQuery)
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

void insertRow::newInsertQuery(htmlPage *query)
{

    int id = 0;
    QSqlQuery tempQuery;
    QStringList keywordList = query->getKeywords();



    //On crée ,dans un QString , une requête sql à partir des arguments recus en paramètre :
   sqlQuery = "INSERT INTO `websites`(`website`,`url`) VALUES('" + query->getTitle() + "','"+ query->getUrl().toString() +"');";


   //On appelle la methode sqlQuery :
   insertNewRow(sqlQuery);


   //On crée une nlle requête pour récupérer le website_id :
   sqlQuery = "SELECT `website_id` FROM `websites` WHERE website="+query->getTitle()+";";


   //On récupère le website_id de la table website dans un int:

   if (tempQuery.exec(sqlQuery))
   {
       int id = tempQuery.value(0).toInt();
   }
   else
   {
       std::cout << "impossible d'obtenir le website id "<<std::endl;
   }

   //On crée une nouvelle requête pour inserer le mot cle correspondant au website id :
   for(int i = 0; i < query->getKeywords().size();i++)
   {
        sqlQuery = "INSERT INTO `keywords` (`keyword`,`keyword_website`) VALUES('"+ keywordList[i] + "','"+ id +"');";
   }
   //sqlQuery = "INSERT INTO `keywords` (`keyword`,`keyword_website`) VALUES('"+query->getKeywords()+ "','"+ id +"');";

   insertNewRow(sqlQuery);
}
