/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
    QPushButton *exportButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QStringLiteral("Window"));
        Window->resize(356, 221);
        centralwidget = new QWidget(Window);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 100, 91, 31));
        line_name = new QLineEdit(centralwidget);
        line_name->setObjectName(QStringLiteral("line_name"));
        line_name->setGeometry(QRect(10, 70, 111, 21));
        QFont font;
        font.setPointSize(10);
        line_name->setFont(font);
        line_count = new QLineEdit(centralwidget);
        line_count->setObjectName(QStringLiteral("line_count"));
        line_count->setGeometry(QRect(130, 70, 61, 21));
        line_count->setFont(font);
        line_date = new QLineEdit(centralwidget);
        line_date->setObjectName(QStringLiteral("line_date"));
        line_date->setGeometry(QRect(200, 70, 141, 20));
        line_date->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 101, 18));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 40, 41, 18));
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 40, 166, 18));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        radioinput = new QRadioButton(centralwidget);
        radioinput->setObjectName(QStringLiteral("radioinput"));
        radioinput->setGeometry(QRect(50, 10, 101, 18));
        QFont font2;
        font2.setPointSize(11);
        radioinput->setFont(font2);
        radiooutput = new QRadioButton(centralwidget);
        radiooutput->setObjectName(QStringLiteral("radiooutput"));
        radiooutput->setGeometry(QRect(181, 9, 121, 18));
        radiooutput->setFont(font2);
        exportButton = new QPushButton(centralwidget);
        exportButton->setObjectName(QStringLiteral("exportButton"));
        exportButton->setGeometry(QRect(100, 140, 131, 31));
        Window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Window);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 356, 21));
        Window->setMenuBar(menubar);
        statusbar = new QStatusBar(Window);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Window->setStatusBar(statusbar);

        retranslateUi(Window);

        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QMainWindow *Window)
    {
        Window->setWindowTitle(QApplication::translate("Window", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Window", "\320\222\320\270\320\272\320\276\320\275\320\260\321\202\320\270", Q_NULLPTR));
        label->setText(QApplication::translate("Window", "\320\235\320\260\320\267\320\262\320\260 \320\276\320\261'\321\224\320\272\321\202\321\203", Q_NULLPTR));
        label_2->setText(QApplication::translate("Window", "\320\232-\321\201\321\202\321\214", Q_NULLPTR));
        label_3->setText(QApplication::translate("Window", "<html><head/><body><p>\320\224\320\260\321\202\320\260 \320\262\320\275\320\265\321\201\320\265\320\275\320\275\321\217</p><p><br/></p></body></html>", Q_NULLPTR));
        radioinput->setText(QApplication::translate("Window", "\320\222\320\275\320\265\321\201\321\202\320\270 \320\264\320\260\320\275\321\226", Q_NULLPTR));
        radiooutput->setText(QApplication::translate("Window", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \320\264\320\260\320\275\321\226", Q_NULLPTR));
        exportButton->setText(QApplication::translate("Window", "\320\227\320\260\320\262\320\260\320\275\321\202\320\260\320\266\320\270\321\202\320\270 \321\203 .txt", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
