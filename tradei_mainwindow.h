#ifndef TRADEI_MAINWINDOW_H
#define TRADEI_MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui {
class TradeI_MainWindow;
}
QT_END_NAMESPACE

class TradeI_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    TradeI_MainWindow(QWidget *parent = nullptr);
    ~TradeI_MainWindow();

private:
    Ui::TradeI_MainWindow *ui;
};
#endif // TRADEI_MAINWINDOW_H
