#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QTimer"
#include "QDateTime"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTimer *timer = new QTimer(this);
    timer->start(1000);
    connect(timer, SIGNAL(timeout()), this, SLOT(hi()));
}

void MainWindow::hi()
{
    QDateTime T;
    ui->label->setText(T.currentDateTime().toString());
}



MainWindow::~MainWindow()
{
    delete ui;
}

