#include "mainwindow.h"

#include <QApplication>

#include<iostream>
#include<fstream>
#include<string>

using namespace std;


int main(int argc, char *argv[])
{


    QApplication a(argc, argv);
    MainWindow w;
    w.showFullScreen();
    //w.show();
    return a.exec();


}
