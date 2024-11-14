#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QTextEdit"
#include "QMessageBox"
#include <QApplication>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("Storage");
    db = new database();
    db->connectToDataBase();

    wnd = new Window(this);

    this->createUI(QStringList() << trUtf8("id")
                                 << trUtf8("Назва")
                                 << trUtf8("Кількість")
                                 << trUtf8("Дата внесення")
                                 );
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::createUI(const QStringList &headers)
{
    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setShowGrid(true);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
    ui->tableWidget->hideColumn(0);
    update();
    ui->tableWidget->resizeColumnsToContents();
}

void MainWindow::update()
{
    ui->tableWidget->setRowCount(0);
    QSqlQuery query("SELECT "
                    STORAGE ".id, "
                    STORAGE "." STORAGE_NAME ", "
                    STORAGE "." STORAGE_NUMBER ", "
                    STORAGE "." STORAGE_DATE
                    " FROM " STORAGE);


    for(int i = 0; query.next(); i++){
        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i,0, new QTableWidgetItem(query.value(0).toString()));
        ui->tableWidget->setItem(i,1, new QTableWidgetItem(query.value(1).toString()));
        ui->tableWidget->setItem(i,2, new QTableWidgetItem(query.value(2).toString()));
        ui->tableWidget->setItem(i,3, new QTableWidgetItem(query.value(3).toString()));
    }
}
void MainWindow::on_pushButton_clicked()
{
    ui->tableWidget->setRowCount(0);
    QString text = ui->lineEdit->text();


    QSqlQuery query("SELECT "
                    STORAGE ".id, "
                    STORAGE "." STORAGE_NAME ", "
                    STORAGE "." STORAGE_NUMBER ", "
                    STORAGE "." STORAGE_DATE
                    " FROM " STORAGE " WHERE " STORAGE_NAME " LIKE '%" + text +"%' ;");


    for(int i = 0; query.next(); i++){
        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i,0, new QTableWidgetItem(query.value(0).toString()));
        ui->tableWidget->setItem(i,1, new QTableWidgetItem(query.value(1).toString()));
        ui->tableWidget->setItem(i,2, new QTableWidgetItem(query.value(2).toString()));
        ui->tableWidget->setItem(i,3, new QTableWidgetItem(query.value(3).toString()));

    }
}

void MainWindow::on_add_notice_triggered()
{
        wnd->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    update();
}

void MainWindow::on_action_triggered()
{
    QMessageBox msgBox;
    msgBox.setText("Дана програма виконана студентом групи КІ-412 Партикою Назаром 2024р.");
    msgBox.setStandardButtons(QMessageBox::Close );
    msgBox.setDefaultButton(QMessageBox::Save);
    int ret = msgBox.exec();
}

void MainWindow::on_exportButton_clicked()
{
  close();
}

void MainWindow::on_pushButton_3_clicked()
{
    close();
}
