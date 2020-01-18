#include "mainwindow.h"
#include <dlabel.h>
MainWindow::MainWindow(QWidget *parent)
    : DMainWindow(parent)
{
    this->setGeometry(0,0,800,600);
    DLabel *label = new DLabel(this);
    label->setText("Hello Deepin");
    label->setStyleSheet("font: 50pt;");
    label->setGeometry(180,20,450,500);
}

MainWindow::~MainWindow()
{
}

