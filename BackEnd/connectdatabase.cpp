
#include <QCoreApplication>
#include <QtSql>
#include <iostream>

#include "connectdatabase.h"
#include "Constantes.h"
//#include "Default_Server.h"

#include "insertrow.h"

using namespace std;

#define q2c(string) string.toStdString();



            // CONSTRUCTOR :

ConnectDatabase::ConnectDatabase(QSqlDatabase db)
{

    db = QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName(HOSTNAME);
    db.setUserName(USERNAME);
    db.setPassword(PASSWORD);
    db.setDatabaseName(DB_NAME);
    bool isConnected;

    if(db.open())
    {
        isConnected = true;
        cout << "connection a la base de donnees " << DB_NAME << " reussie"<< endl;

       /* QSqlQuery nlleRequete;
        if(nlleRequete.exec("SELECT * FROM `keywords` "))
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
        }*/

    }
    else
    {
        isConnected = false;
        cout << "Unable to connect to database" << endl;
    }

}

bool connecDatabase::connetionOpen(){

    return isconnected;
}

