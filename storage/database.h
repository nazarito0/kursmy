#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QSql>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>
#include <QFile>
#include <QDate>
#include <QDebug>

#define DATABASE_HOSTNAME   "DataBase"
#define DATABASE_NAME       "database.db"

#define STORAGE                 "Storage"
#define STORAGE_NAME            "Name"
#define STORAGE_NUMBER          "Number"
#define STORAGE_DATE            "Date"



class database : public QObject
{
    Q_OBJECT
public:
    explicit database(QObject *parent = 0);
    virtual ~database();
    void connectToDataBase();
    bool inserIntoTable(const QVariantList &data);
    void adding(QString name, int count, QString date);

private:

    QSqlDatabase    db;

private:

    bool openDataBase();
    bool restoreDataBase();
    void closeDataBase();
    bool createTable();

};

#endif // DATABASE_H

