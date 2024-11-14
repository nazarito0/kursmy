#include "mainwindow.h"

#include <QGuiApplication>
#include <QApplication>
#include<QLabel>
#include <QFile>

int main(int argc, char *argv[])
{
    QGuiApplication::setAttribute(Qt::AA_EnableHighDpiScaling);  // Включення підтримки High DPI
    QApplication a(argc, argv);

    QFile file(":/style.css");
    file.open(QFile::ReadOnly);
    a.setStyleSheet(file.readAll());

    MainWindow w;
    w.show();
    return a.exec();
}
