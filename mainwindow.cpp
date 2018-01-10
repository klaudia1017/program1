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
    if (ui->comboBox->currentText()=="x")
        {
            ui->textBox1->setText(QString::number(x1*x2));
        }
    else if (ui->comboBox->currentText()=="+")
        {
            ui->textBox1->setText(QString::number(x1+x2));
        }
    else if (ui->comboBox->currentText()=="-")
        {
            ui->textBox1->setText(QString::number(x1-x2));
        }
    else if ((ui->comboBox->currentText()=="/")&(x2!=0))
        {
            ui->textBox1->setText(QString::number(x1/x2));
        }
    else if ((ui->comboBox->currentText()=="rów kwadr")&(x2!=0))
        {
            qint8 a = ui->spinBox->value();
            qint8 b = ui->spinBox_2->value();
            qint8 c = ui->spinBox_3->value();
            qint8 delta = b^2-4*a*c;
            if (delta==0)
            {
                ui->textBox1->setText(QString::number((-1*b)/(2*a)));
            }
            else if (delta>0)
            {
                ui->textBox1->setText(QString::number((delta-b)/(2*a)));
                ui->textBox1_2->setText(QString::number((delta+b)/(2*a)));
            }
            if (delta<0)
            {
                ui->textBox1->setText(QString::number((-1*b)/(2*a)));
            }

        }
}
