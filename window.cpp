#include "window.h"
#include "ui_window.h"




Window::Window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Window)
{
    ui->setupUi(this);
    db = new database;

}

Window::~Window()
{
    delete ui;
}

void Window::on_pushButton_clicked()
{
    int number = 0;
    int status = 0;
    int number2 = 100;

     number2 = ui->line_count->text().toInt();

    if (ui->radioinput->isChecked() == true){
        status = 1;
    }
    else if (ui->radiooutput->isChecked() == true){
        status = 2;
    }
    else{
        qDebug() << "You dont checked the radiobutton";
    }
    switch (status) {
    case 1:{
            db->inserIntoTable(QVariantList() << ui->line_name->text()
                                              << ui->line_count->text()
                                              << ui->line_date->text());
        break;
    }
    case 2:{
        QSqlQuery *query = new QSqlQuery();
        QString sql1 = QString("SELECT " STORAGE_NUMBER " FROM " STORAGE " WHERE " STORAGE_NAME " = '" + ui->line_name->text() + "';");
        query->prepare(sql1);

           if(query->exec())
           {
               query->next();
               number = query->value(0).toInt();
           }

        if (number2 < 1){
            qDebug() << "Write correct data";
        }
        else{
        if (number > number2){
            int num3 = number - number2;
            QSqlQuery query("UPDATE " STORAGE " SET " STORAGE_NUMBER "="  + QString::number(num3) +  " WHERE " STORAGE_NAME " = '" + ui->line_name->text() + "';");

        }
        else{
            QSqlQuery query("DELETE FROM " STORAGE
                            " WHERE " STORAGE_NAME " = '" + ui->line_name->text() + "';");
        }
        break;
        }
    }
    default:
        qDebug() << "Wrong data";

    }
}


