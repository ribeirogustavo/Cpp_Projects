#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>

void Begin()
{
    //Quando iniciar o programa, carrega lista de COM disponíveis

    //QComboBox Combo;
    //Combo.addItem("COM1");

}

int main(int argc, char *argv[])
{
    Begin();

    QApplication a(argc, argv);
    MainWindow w;

    w.show();

    return a.exec();
}
