#include "principal.h"
#include "ui_principal.h"

Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
}

Principal::~Principal()
{
    delete ui;
}


void Principal::on_cmdCalcular_released()
{
    calcular();
}

void Principal::on_actionCalcular_triggered()
{
    calcular();
}

void Principal::calcular()
{
    float num1 = ui->inNum1->value();
    float num2 = ui->inNum2->value();

    double promedio = 0.0;
    switch(ui->inOperation->currentIndex()){
    case 0:
        promedio=num1+num2;
        break;
    case 1:
        promedio=num1-num2;
        break;
    case 2:
        promedio=num1*num2;
        break;
    case 3:
        promedio=num1/num2;
        break;
    default:
        break;
    }
    QMessageBox::information(this, tr("Resultado"),
                             tr("El resultado es: %1").arg(promedio));
}
