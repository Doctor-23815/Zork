#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ZorkUL.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
// below added

{
    ui->setupUi(this);

    ui->textEdit->append(QString::fromStdString(zork->printWelcome() + "\n"));

    ui->mapDisplay->append(QString::fromStdString(zork->mapDisplay()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::goRoom(string direction) {

    if (direction == "teleport" && zork->getCurrentRoom().description == "d") {

        coffeeMachine();

    } else if (direction == "teleport") {

            ui->textEdit->append(QString::fromStdString(zork->teleport() + "\n"));

    } else {

        ui->textEdit->append(QString::fromStdString(zork->goToRoom(direction) + "\n"));

        if (zork->getCurrentRoom().description == "d") {

            coffeeMachine();

        }

        }

    }

//



void MainWindow::on_info_pushButton_clicked() {

    ui->textEdit->append(QString::fromStdString(zork->printHelp()));

}

//
void MainWindow::on_north_pushButton_clicked() {

    goRoom("north");

}

void MainWindow::on_south_pushButton_clicked() {

    goRoom("south");

}

void MainWindow::on_east_pushButton_clicked() {

    goRoom("east");

}

void MainWindow::on_west_pushButton_clicked() {

    goRoom("west");

}

//
void MainWindow::on_teleport_pushButton_clicked() {

    goRoom("teleport");

}
