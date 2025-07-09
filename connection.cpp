#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("projet_stage25");//inserer le nom de la source de données
    db.setUserName("sue");//inserer nom de l'utilisateur
    db.setPassword("souha");//inserer mot de passe de cet utilisateur

    if (db.open())
        test=true;





    return  test;
}
