#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    qint8 x1 = ui->spinBox->value();
    qint8 x2 = ui->spinBox_2->value();
    ui->textBox1->setText(QString::number(x1*x2));
}
