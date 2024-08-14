#ifndef TRADEI_MAINWINDOW_H
#define TRADEI_MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class Trade_I;
}
QT_END_NAMESPACE

class TradeI_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    TradeI_MainWindow(QWidget *parent = nullptr);
    ~TradeI_MainWindow();

private slots:
    void Query();

private:
    Ui::Trade_I *ui;
};
#endif // TRADEI_MAINWINDOW_H
