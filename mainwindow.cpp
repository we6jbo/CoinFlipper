#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}
MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_printButton_clicked() {
    // Calls your brother_ql helper script - swap in real args/label image
    QProcess::startDetached("brother_ql", {"-m", "QL-1100", "print", "label.png"});
}
