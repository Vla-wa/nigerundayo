#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cmath"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    double a = ui->a->text().toDouble();
    double b = ui->b->text().toDouble();
    double c = ui->c->text().toDouble();
    double Discriminant = b*b + (-1*4*a*c);
    double x1 = (-1*b+sqrt(Discriminant))/(2*a);
    double x2 = (-1*b-sqrt(Discriminant))/(2*a);
    ui->X1->setText(QString::number(x1));
    ui->X2->setText(QString::number(x2));
}

