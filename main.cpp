#include "mainwindow.h"
#include "barkeeper.h"
#include <QApplication>
#include <QDebug>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    qDebug() << "Hello main";

    // Do I need to pass the window? We will see
    //Barkeeper barkeeper(w);
    Barkeeper barkeeper;

    return a.exec();
}
