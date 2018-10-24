#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_calc_clicked()
{
    ui->lineEdit_x1->clear();
    ui->lineEdit_x2->clear();
    QVector<double> res = discriminant.calc(ui->doubleSpinBox_a->value(),
                                            ui->doubleSpinBox_b->value(),
                                            ui->doubleSpinBox_c->value());
    if(res.size() == 2){
        ui->lineEdit_x1->setText(QString::number(res.at(0)));
        ui->lineEdit_x2->setText(QString::number(res.at(1)));
    }else if(res.size() == 1)
        ui->lineEdit_x1->setText(QString::number(res.at(0)));
}
