#include "database.h"

database::database(QObject *parent) : QObject(parent)
{

}

 database::~database()
{

}


void database::connectToDataBase()
{

    if(!QFile(DATABASE_NAME).exists()){
        this->restoreDataBase();
    } else {
        this->openDataBase();
    }
}


bool database::restoreDataBase()
{
    if(this->openDataBase()){
        if(!this->createTable()){
            return false;
        } else {
            return true;
        }
    } else {
        qDebug() << "Не вдалось відновити базу даних";
        return false;
    }
    return false;
}


bool database::openDataBase()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName(DATABASE_HOSTNAME);
    db.setDatabaseName(DATABASE_NAME);
    if(db.open()){
        return true;
    } else {
        return false;
    }
}

void database::closeDataBase()
{
    db.close();
}


bool database::createTable()
{

    QSqlQuery query;
    if(!query.exec( "CREATE TABLE " STORAGE " (id INTEGER PRIMARY KEY AUTOINCREMENT, "
                            STORAGE_NAME    " VARCHAR(255)       NOT NULL,"
                            STORAGE_NUMBER  " INTEGER  NOT NULL,"
                            STORAGE_DATE    " DATE     NOT NULL"
                        " );"
                    )){
        qDebug() << "DataBase: error of create " << STORAGE;
        qDebug() << query.lastError().text();
        return false;
    } else {
        return true;
    }
    return false;
}


bool database::inserIntoTable(const QVariantList &data)
{

    QSqlQuery query;
    query.prepare("INSERT INTO " STORAGE " ( " STORAGE_NAME ", "
                                              STORAGE_NUMBER ", "
                                              STORAGE_DATE " ) "
                  "VALUES (:NAME, :NUMBER, :DATE );");
    query.bindValue(":NAME",      data[0].toString());
    query.bindValue(":NUMBER",    data[1].toInt());
    query.bindValue(":DATE",      data[2].toString());
    if(!query.exec()){
        qDebug() << "error insert into " << STORAGE;
        qDebug() << query.lastError().text();
        return false;
    } else {
        return true;
    }
    return false;
}

void database::adding(QString name, int count, QString date)
{
    QSqlQuery query;
    query.prepare("INSERT INTO " STORAGE " ( " STORAGE_NAME ", "
                                              STORAGE_NUMBER ", "
                                              STORAGE_DATE " ) "
                  "VALUES (:NAME, :NUMBER, :DATE );");
    query.bindValue(":NAME",      name);
    query.bindValue(":NUMBER",    count);
    query.bindValue(":DATE",      date);
    if(!query.exec()){
        qDebug() << "error insert into " << STORAGE;
        qDebug() << query.lastError().text();

    }
}



