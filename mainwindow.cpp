#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <math.h>

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

double MainWindow::round(double value){
    if(fabs(value) < 1e-10){
        return 0;
    }
    return value;
}

void MainWindow::updateResult(double res){
    if(qIsInf(res)){
        ui->label_result_value->setText("Бесконечность");
    }else if(qIsNaN(res)){
        ui->label_result_value->setText("Не число");
    }else{
        ui->label_result_value->setText(QString::number(res, 'f', 10));
    }
}

void MainWindow::on_button_sum_clicked()
{
    bool valid_1 = false;
    bool valid_2 = false;

    double value_1 = ui->lineEdit_value_1->text().toDouble(&valid_1);
    double value_2 = ui->lineEdit_value_2->text().toDouble(&valid_2);

    if(!(valid_1 && valid_2)) {
        ui->label_result_value->setText("Ошибка");
        return;
    }

    double res = value_1 + value_2;
    updateResult(res);
}

void MainWindow::on_button_sub_clicked()
{
    bool valid_1 = false;
    bool valid_2 = false;

    double value_1 = ui->lineEdit_value_1->text().toDouble(&valid_1);
    double value_2 = ui->lineEdit_value_2->text().toDouble(&valid_2);

    if(!(valid_1 && valid_2)) {
        ui->label_result_value->setText("Ошибка");
        return;
    }

    double res = value_1 - value_2;
    updateResult(res);
}

void MainWindow::on_button_mul_clicked()
{
    bool valid_1 = false;
    bool valid_2 = false;

    double value_1 = ui->lineEdit_value_1->text().toDouble(&valid_1);
    double value_2 = ui->lineEdit_value_2->text().toDouble(&valid_2);

    if(!(valid_1 && valid_2)) {
        ui->label_result_value->setText("Ошибка");
        return;
    }

    double res = value_1 * value_2;
    updateResult(res);
}

void MainWindow::on_button_div_clicked()
{
    bool valid_1 = false;
    bool valid_2 = false;

    double value_1 = ui->lineEdit_value_1->text().toDouble(&valid_1);
    double value_2 = ui->lineEdit_value_2->text().toDouble(&valid_2);

    if(!(valid_1 && valid_2)) {
        ui->label_result_value->setText("Ошибка");
        return;
    }

    if(value_2 == 0.0) {
        ui->label_result_value->setText("Нельзя делить на ноль!");
        return;
    }

    double res = value_1 / value_2;
    updateResult(res);
}

void MainWindow::on_button_sin_clicked()
{
    bool valid = false;

    double value = ui->lineEdit_value_1->text().toDouble(&valid);

    if(!valid) {
        ui->label_result_value->setText("Ошибка");
        return;
    }

    double res = 0.0;
    if(ui->radio_grad->isChecked()){
        res = round(sin(value * M_PI / 180.0));
    } else if(ui->radio_rad->isChecked()){
        res = round(sin(value));
    } else {
        ui->label_result_value->setText("Выберите тип!");
        return;
    }

    updateResult(res);
}

void MainWindow::on_button_cos_clicked()
{
    bool valid = false;

    double value = ui->lineEdit_value_1->text().toDouble(&valid);

    if(!valid) {
        ui->label_result_value->setText("Ошибка");
        return;
    }

    double res = 0.0;
    if(ui->radio_grad->isChecked()){
        res = round(cos(value * M_PI / 180.0));
    } else if(ui->radio_rad->isChecked()){
        res = round(cos(value));
    } else {
        ui->label_result_value->setText("Выберите тип!");
        return;
    }

    updateResult(res);
}

void MainWindow::on_button_tan_clicked()
{
    bool valid = false;

    double value = ui->lineEdit_value_1->text().toDouble(&valid);

    if(!valid) {
        ui->label_result_value->setText("Ошибка");
        return;
    }

    double res = 0.0;
    if(ui->radio_grad->isChecked()){
        res = round(tan(value * M_PI / 180.0));
    } else if(ui->radio_rad->isChecked()){
        res = round(tan(value));
    } else {
        ui->label_result_value->setText("Выберите тип!");
        return;
    }

    updateResult(res);
}

void MainWindow::on_button_cotan_clicked()
{
    bool valid = false;

    double value = ui->lineEdit_value_1->text().toDouble(&valid);

    if(!valid) {
        ui->label_result_value->setText("Ошибка");
        return;
    }

    double res = 0.0;
    if(ui->radio_grad->isChecked()){
        res = round(1/tan(value * M_PI / 180.0));
    } else if(ui->radio_rad->isChecked()){
        res = round(1/tan(value));
    } else {
        ui->label_result_value->setText("Выберите тип!");
        return;
    }

    updateResult(res);
}

void MainWindow::on_button_arcsin_clicked()
{
    bool valid = false;

    double value = ui->lineEdit_value_1->text().toDouble(&valid);

    if(!valid) {
        ui->label_result_value->setText("Ошибка");
        return;
    }

    double res = 0.0;
    if(ui->radio_grad->isChecked()){
        res = round(asin(value / M_PI * 180.0));
    } else if(ui->radio_rad->isChecked()){
        res = round(asin(value));
    } else {
        ui->label_result_value->setText("Выберите тип!");
        return;
    }

    updateResult(res);
}

void MainWindow::on_button_arccos_clicked()
{
    bool valid = false;

    double value = ui->lineEdit_value_1->text().toDouble(&valid);

    if(!valid) {
        ui->label_result_value->setText("Ошибка");
        return;
    }

    double res = 0.0;
    if(ui->radio_grad->isChecked()){
        res = round(acos(value / M_PI * 180.0));
    } else if(ui->radio_rad->isChecked()){
        res = round(acos(value));
    } else {
        ui->label_result_value->setText("Выберите тип!");
        return;
    }

    updateResult(res);
}
