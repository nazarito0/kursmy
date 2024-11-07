#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include "database.h"


namespace Ui {
class Window;
}

class Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit Window(QWidget *parent = nullptr);
    ~Window();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Window *ui;
     database   *db;

};

#endif // WINDOW_H
