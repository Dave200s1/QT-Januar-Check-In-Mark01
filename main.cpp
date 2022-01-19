#include "mainwindow.h"

#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>


void basics()
{

    QFile File("text.txt");
    if(!File.open(QIODevice::OpenModeFlag::Append))
    {
        qCritical()<<"Could not open files!";
        qCritical()<<File.errorString();
        return;

    }

    qInfo()<<"Writing file..";
    File.write(QByteArray("Hello World"));
    File.flush();//pushes the data to the device

    qInfo()<<"Reading file..";
    File.seek(0);//0 beginnig of a file
    qInfo()<<File.readAll();

    File.close();
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    basics();
    MainWindow w;
    w.show();
    return a.exec();
}
