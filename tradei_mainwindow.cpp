#include "tradei_mainwindow.h"
#include "./ui_tradei_mainwindow.h"


TradeI_MainWindow::TradeI_MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TradeI_MainWindow)
{
    ui->setupUi(this);
}

TradeI_MainWindow::~TradeI_MainWindow()
{
    delete ui;
}
