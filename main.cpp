// @file main.cpp
// @author Cameron Shore
// @date 25-June-2021
// holds main function for app


#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
