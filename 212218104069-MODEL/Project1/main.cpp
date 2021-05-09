#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyleSheet("QPushButton{color:black;background-color:blue;font-weight:bold;}"
"QPushButton:hover{background-color:green;}");

    Widget w;
    w.show();
    return a.exec();
}
