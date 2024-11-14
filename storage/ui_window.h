/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLineEdit *line_name;
    QLineEdit *line_count;
    QLineEdit *line_date;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QRadioButton *radioinput;
    QRadioButton *radiooutput;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QString::fromUtf8("Window"));
        Window->resize(346, 159);
        centralwidget = new QWidget(Window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 90, 101, 31));
        line_name = new QLineEdit(centralwidget);
        line_name->setObjectName(QString::fromUtf8("line_name"));
        line_name->setGeometry(QRect(10, 60, 161, 24));
        QFont font;
        font.setPointSize(10);
        line_name->setFont(font);
        line_count = new QLineEdit(centralwidget);
        line_count->setObjectName(QString::fromUtf8("line_count"));
        line_count->setGeometry(QRect(180, 60, 41, 24));
        line_count->setFont(font);
        line_date = new QLineEdit(centralwidget);
        line_date->setObjectName(QString::fromUtf8("line_date"));
        line_date->setGeometry(QRect(230, 60, 111, 24));
        line_date->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 111, 21));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 32, 41, 16));
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 30, 111, 21));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        radioinput = new QRadioButton(centralwidget);
        radioinput->setObjectName(QString::fromUtf8("radioinput"));
        radioinput->setGeometry(QRect(40, 8, 111, 19));
        QFont font2;
        font2.setPointSize(11);
        radioinput->setFont(font2);
        radiooutput = new QRadioButton(centralwidget);
        radiooutput->setObjectName(QString::fromUtf8("radiooutput"));
        radiooutput->setGeometry(QRect(190, 8, 121, 19));
        radiooutput->setFont(font2);
        Window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 346, 20));
        Window->setMenuBar(menubar);
        statusbar = new QStatusBar(Window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Window->setStatusBar(statusbar);

        retranslateUi(Window);

        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QMainWindow *Window)
    {
        Window->setWindowTitle(QApplication::translate("Window", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("Window", "\320\222\320\270\320\272\320\276\320\275\320\260\321\202\320\270", nullptr));
        label->setText(QApplication::translate("Window", "\320\235\320\260\320\267\320\262\320\260 \320\276\320\261'\321\224\320\272\321\202\321\203", nullptr));
        label_2->setText(QApplication::translate("Window", "\320\232-\321\201\321\202\321\214", nullptr));
        label_3->setText(QApplication::translate("Window", "<html><head/><body><p>\320\224\320\260\321\202\320\260 \320\262\320\275\320\265\321\201\320\265\320\275\320\275\321\217</p><p><br/></p></body></html>", nullptr));
        radioinput->setText(QApplication::translate("Window", "\320\222\320\275\320\265\321\201\321\202\320\270 \320\264\320\260\320\275\321\226", nullptr));
        radiooutput->setText(QApplication::translate("Window", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \320\264\320\260\320\275\321\226", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
