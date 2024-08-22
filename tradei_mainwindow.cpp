#include "tradei_mainwindow.h"
#include "./ui_tradei_mainwindow.h"


TradeI_MainWindow::TradeI_MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::Trade_I){

    ui->setupUi(this);
    QString Ticker;
    ui->TickerEdit->setPlaceholderText("IBM");

    connect(ui->QueryButton, &QPushButton::clicked, this, [this] {
        QString Ticker = ui->TickerEdit->toPlainText();  // Retrieve the current text from the TextEdit
        Query(Ticker);
    });

}

TradeI_MainWindow::~TradeI_MainWindow(){

    delete ui;
}

void TradeI_MainWindow::Query(QString Ticker){

    QMessageBox::information(this,"Query Began", Ticker);

}
