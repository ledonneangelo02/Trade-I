#include "tradei_mainwindow.h"
#include "./ui_tradei_mainwindow.h"


TradeI_MainWindow::TradeI_MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::Trade_I){

    ui->setupUi(this);

    connect(ui->QueryButton, &QPushButton::clicked, this, &TradeI_MainWindow::Query);
}

TradeI_MainWindow::~TradeI_MainWindow(){

    delete ui;
}

void TradeI_MainWindow::Query(){

    QMessageBox::information(this,"Query Began", "The Query is starting");
}
