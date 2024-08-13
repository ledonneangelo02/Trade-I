#include "tradei_mainwindow.h"

#include <QApplication>


int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    TradeI_MainWindow w;
    w.show();
    return a.exec();
}
