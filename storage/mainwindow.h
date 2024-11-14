#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlQuery>
#include <QMessageBox>

/* My includes */
#include <database.h>
#include "window.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{


    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_pushButton_clicked();

    void on_add_notice_triggered();

    void on_pushButton_2_clicked();

    void on_action_triggered();
    void on_exportButton_clicked();

    void on_pushButton_3_clicked();
private:
    Ui::MainWindow  *ui;
    database        *db;
    Window          *wnd;

private:
    void createUI(const QStringList &headers);
    void update();


};

#endif // MAINWINDOW_H
