#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}
MainWindow::~MainWindow() { delete ui; }
void MainWindow::on_printButton_clicked()
{
    QProcess::startDetached(
        "brother_ql",
        {"-m", "QL-1100", "print", "label.png"});
}
void MainWindow::on_button_clicked()
{

    if (rand() % 2 == 0)
        ui->flip->setText("Heads");
            else {
                ui->flip->setText("Tails");
            }
}

