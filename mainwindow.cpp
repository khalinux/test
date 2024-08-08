#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "test.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    test tobj;


}

MainWindow::~MainWindow()
{
    delete ui;
}
