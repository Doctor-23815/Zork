#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ZorkUL.h"
#include "surroundings.h"

#include <string>
#include <iostream>
#include <QCoreApplication>
#include <QTextStream>
#include <QtWidgets/QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    ui->textEdit->append(QString::fromStdString(zork->printWelcome()  + "\n"));

    ui->textEdit->append(QString::fromStdString(environment->printEntrance()));

    ui->textEdit->append(QString::fromStdString(zork->printOnTheDoor() + "\n"));

    ui->textEdit->append(QString::fromStdString(zork->printDescriptionOfRoom() + "\n"));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::goRoom(string direction) {

    if (direction == "teleport") {

        ui->textEdit->append(QString::fromStdString(zork->teleport() + "\n"));

            if (zork->getCurrentRoom().description == "j") {

                ui->textEdit->append(QString::fromStdString(environment->printStarted() + "\n"));

            } else if (zork->getCurrentRoom().description == "d") {

                    ui->textEdit->append(QString::fromStdString(environment->printEmptyThreeDoor() + "\n"));

            } else if (zork->getCurrentRoom().description == "i") {

                    ui->textEdit->append(QString::fromStdString(environment->printShield() + "\n"));

            } else if (zork->getCurrentRoom().description == "e") {

                    ui->textEdit->append(QString::fromStdString(environment->printPast()));

                    ui->textEdit->append(QString::fromStdString(environment->printAverage()));

            } else if (zork->getCurrentRoom().description == "a") {

                    ui->textEdit->append(QString::fromStdString(environment->printCoffeeMachineRoom() + "\n"));

                    ui->textEdit->append(QString::fromStdString(environment->printCoffeeList() + "\n"));

            } else if (zork->getCurrentRoom().description == "c") {

                    ui->textEdit->append(QString::fromStdString(environment->printEmpty() + "\n"));

            } else if (zork->getCurrentRoom().description == "b") {

                    ui->textEdit->append(QString::fromStdString(environment->printEmpty() + "\n"));

            } else if (zork->getCurrentRoom().description == "f") {

                    ui->textEdit->append(QString::fromStdString(environment->printEmpty() + "\n"));

            } else if (zork->getCurrentRoom().description == "h") {

                    ui->textEdit->append(QString::fromStdString(environment->printEmpty() + "\n"));

            } else if (zork->getCurrentRoom().description == "g") {

                    ui->textEdit->append(QString::fromStdString(environment->printSafety() + "\n"));

                    ui->textEdit->append(QString::fromStdString(environment->printTheEnd() + "\n"));

                    buttonStopper();

                         }

    } else if (direction == "north" || direction == "south" || direction == "east" || direction == "west") {

               ui->textEdit->append(QString::fromStdString(zork->goToRoom(direction) + "\n"));

                   if (zork->getCurrentRoom().description == "j") {

                       ui->textEdit->append(QString::fromStdString(environment->printStarted() + "\n"));

                   } else if (zork->getCurrentRoom().description == "d") {

                       ui->textEdit->append(QString::fromStdString(environment->printEmptyThreeDoor() + "\n"));

                   } else if (zork->getCurrentRoom().description == "i") {

                       ui->textEdit->append(QString::fromStdString(environment->printShield() + "\n"));

                   } else if (zork->getCurrentRoom().description == "e") {

                       ui->textEdit->append(QString::fromStdString(environment->printPast()));

                       ui->textEdit->append(QString::fromStdString(environment->printAverage()));

                   } else if (zork->getCurrentRoom().description == "a") {

                       ui->textEdit->append(QString::fromStdString(environment->printCoffeeMachineRoom() + "\n"));

                       ui->textEdit->append(QString::fromStdString(environment->printCoffeeList() + "\n"));

                   } else if (zork->getCurrentRoom().description == "c") {

                       ui->textEdit->append(QString::fromStdString(environment->printEmpty() + "\n"));

                   } else if (zork->getCurrentRoom().description == "b") {

                       ui->textEdit->append(QString::fromStdString(environment->printEmpty() + "\n"));

                   } else if (zork->getCurrentRoom().description == "f") {

                       ui->textEdit->append(QString::fromStdString(environment->printEmpty() + "\n"));

                   } else if (zork->getCurrentRoom().description == "h") {

                       ui->textEdit->append(QString::fromStdString(environment->printEmpty() + "\n"));

                   } else if (zork->getCurrentRoom().description == "g") {

                       ui->textEdit->append(QString::fromStdString(environment->printSafety() + "\n"));

                       ui->textEdit->append(QString::fromStdString(environment->printTheEnd() + "\n"));

                       buttonStopper();

                   }

    }

}

void MainWindow::on_info_pushButton_clicked() {

    ui->textEdit->append(QString::fromStdString(zork->printHelp()));

}

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

void MainWindow::on_map_pushButton_clicked() {

    ui->mapDisplay->append(QString::fromStdString(zork->mapDisplay()));
    ui->map_pushButton->setEnabled(false);

}

void MainWindow::buttonStopper() {

     ui->east_pushButton->setEnabled(false);
     ui->info_pushButton->setEnabled(false);
     ui->north_pushButton->setEnabled(false);
     ui->south_pushButton->setEnabled(false);
     ui->teleport_pushButton->setEnabled(false);
     ui->west_pushButton->setEnabled(false);

}
