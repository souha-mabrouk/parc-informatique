#ifndef MAINWINDOWACC_H
#define MAINWINDOWACC_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindowACC;
}
QT_END_NAMESPACE

class MainWindowACC : public QMainWindow
{
    Q_OBJECT

public:
    MainWindowACC(QWidget *parent = nullptr);
    ~MainWindowACC();

private:
    Ui::MainWindowACC *ui;
};
#endif // MAINWINDOWACC_H
