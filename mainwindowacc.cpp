#include "mainwindowacc.h"
#include "ui_mainwindowacc.h"

MainWindowACC::MainWindowACC(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowACC)
{
    ui->setupUi(this);
}

MainWindowACC::~MainWindowACC()
{
    delete ui;
}
