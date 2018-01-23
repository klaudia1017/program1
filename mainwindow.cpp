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
    qreal x1 = ui->spinBox->value();
    qreal x2 = ui->spinBox_2->value();
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
            qreal a = ui->spinBox->value();
            qreal b = ui->spinBox_2->value();
            qreal c = ui->spinBox_3->value();
            qreal delta = (b*b)-4*a*c;
            qreal sqrtdelta=sqrt(delta);
            if (sqrtdelta==0)
            {
                ui->textBox1->setText(QString::number((-1*b)/(2*a)));
            }
            else if (sqrtdelta>0)
            {
                ui->textBox1_2->setText(QString::number((sqrtdelta-b)/(2*a)));
                ui->textBox1->setText(QString::number((sqrtdelta+b)/(2*a)));
            }
            if (sqrtdelta<0)
            {
                ui->textBox1->setText(QString::number((-1*b)/(2*a)));
            }

        }
}
