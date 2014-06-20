#include <QCoreApplication>
#include <iostream>
#include <QtSql>
#include "insertrow.h"

//#include <QSqlRecord>


using namespace std;

#define q2c(string) string.toStdString();   //Permet de faciliter la conversion QString -> string

#include "connectdatabase.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << std::flush;

    //Création d'un objet base de données:

    QSqlDatabase db;


    //Connection a la base de donnée :
    ConnectDatabase nlleConnection(db);

    //insertion de donnee dans la table keywords :
    //InsertRow rowToInsert("\`KEYWORDS\`","\`KEYWORD\`","\`KEYWORD_WEBSITES\`","\"keywordtest\"","1");


    //fermeture de la base de donnée:
    db.close();




                //LIGNES DE CODE EN COMMENTAIRE ME SERVANT SIMPLEMENT D'AIDE MEMOIRE :


/*   QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");

   db.setHostName("localhost");
   db.setUserName("root");
   db.setPassword("");
   db.setDatabaseName("Test");

   QSqlQuery nlleRequete;

   if(db.open())
   {
       string hostname = q2c(db.hostName());
       cout << "Vous etes maintenant connecte a "  << hostname << endl;

       if(nlleRequete.exec("INSERT INTO `salutation`(`hello`) VALUES(\"\coucou ya personne?\"\);"))
       {
            cout << "mise a jour de la base de donnee effectuee" << endl;
       }
       else
       {
           cout << "requete inutile ...passez votre chemin"<< endl;
       }

       if(nlleRequete.exec("SELECT * FROM `salutation` "))
       {
           cout << "mise a jour de la base de donnee effectuee" << endl;
           while(nlleRequete.next())
           {
               for(int i = 0 ; i < nlleRequete.record().count(); i++)
               {
                   string temp = q2c(nlleRequete.record().fieldName(i));
                   string temp2 = q2c(nlleRequete.value(i).toString());
                    cout << temp  << "=" << temp2 <<endl;
               }

           }
        }
       else
       {
           cout << "requete inutile ...passez votre chemin"<< endl;
       }



       db.close();
   }
   else
   {
       cout << "La connexion a echouee, desole" << endl;
   }*/

    return a.exec();
}
