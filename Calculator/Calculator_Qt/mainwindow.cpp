#include "mainwindow.h"
#include "./ui_mainwindow.h"

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


// Helper to get input values
std::pair<double, double> MainWindow::getInputs() {
    double a = ui->input1LineEdit->text().toDouble();
    double b = ui->input2LineEdit->text().toDouble();
    return {a, b};
}

void MainWindow::on_addButton_clicked()
{
    auto [a, b] = getInputs();
    ui->resultLabel->setText(QString::number(a + b));
}

void MainWindow::on_subButton_clicked()
{
    auto [a, b] = getInputs();
    ui->resultLabel->setText(QString::number(a - b));
}

void MainWindow::on_mulButton_clicked()
{
    auto [a, b] = getInputs();
    ui->resultLabel->setText(QString::number(a * b));
}

void MainWindow::on_divButton_clicked()
{
    auto [a, b] = getInputs();
    if (b == 0) {
        ui->resultLabel->setText("Error: divide by 0");
    } else {
        ui->resultLabel->setText(QString::number(a / b));
    }
}

void MainWindow::on_clearButton_clicked()
{
    ui->input1LineEdit->clear();
    ui->input2LineEdit->clear();
    ui->resultLabel->setText("0");
}
