#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ZorkUL.h"
#include "surroundings.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
// below added

{
    ui->setupUi(this);

    ui->textEdit->append(QString::fromStdString(zork->printWelcome()  + "\n"));

    ui->textEdit->append(QString::fromStdString(environment->printEntrance() + "\n"));

    ui->textEdit->append(QString::fromStdString(zork->printDescriptionOfRoom() + "\n"));

    ui->mapDisplay->append(QString::fromStdString(zork->mapDisplay()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::goRoom(string direction) {

    if (direction == "teleport") {

        ui->textEdit->append(QString::fromStdString(zork->teleport() + "\n"));

            if (zork->getCurrentRoom().description == "j") {

                ui->textEdit->append(QString::fromStdString(zork->printDescriptionOfRoom() + "\n"));

                ui->textEdit->append(QString::fromStdString(environment->printStarted() + "\n"));

            }

    } else if (direction == "teleport") {

            ui->textEdit->append(QString::fromStdString(zork->teleport() + "\n"));

                if (zork->getCurrentRoom().description == "d") {

                    ui->textEdit->append(QString::fromStdString(zork->printDescriptionOfRoom() + "\n"));

                    ui->textEdit->append(QString::fromStdString(environment->printEmptyThreeDoor() + "\n"));

                }

    } else if (direction == "teleport") {

                    ui->textEdit->append(QString::fromStdString(zork->teleport() + "\n"));

                        if (zork->getCurrentRoom().description == "i") {

                            ui->textEdit->append(QString::fromStdString(zork->printDescriptionOfRoom() + "\n"));

                            ui->textEdit->append(QString::fromStdString(environment->printShield() + "\n"));

                        }

    } else if (direction == "teleport") {

                     ui->textEdit->append(QString::fromStdString(zork->teleport() + "\n"));

                        if (zork->getCurrentRoom().description == "e") {

                             ui->textEdit->append(QString::fromStdString(zork->printDescriptionOfRoom() + "\n"));

                             ui->textEdit->append(QString::fromStdString(environment->printEmpty() + "\n"));

                        }

    } else if (direction == "teleport") {

                     ui->textEdit->append(QString::fromStdString(zork->teleport() + "\n"));

                        if (zork->getCurrentRoom().description == "a") {

                             ui->textEdit->append(QString::fromStdString(zork->printDescriptionOfRoom() + "\n"));

                             ui->textEdit->append(QString::fromStdString(environment->printCoffeeMachineRoom() + "\n"));

                                                                                   // coffee black
                             ui->textEdit->append(QString::fromStdString(environment->coffeeMachine() + "\n"));

                                                                                   // coffee with milk
                             ui->textEdit->append(QString::fromStdString(environment->coffeeMachine(true) + "\n"));

                                                                                   // coffee with milk and sugar
                             ui->textEdit->append(QString::fromStdString(environment->coffeeMachine(true, true) + "\n"));

                                                                                   // coffee with sugar
                             ui->textEdit->append(QString::fromStdString(environment->coffeeMachine(false, true) + "\n"));

                        }

    } else if (direction == "teleport") {

                     ui->textEdit->append(QString::fromStdString(zork->teleport() + "\n"));

                         if (zork->getCurrentRoom().description == "c") {

                             ui->textEdit->append(QString::fromStdString(zork->printDescriptionOfRoom() + "\n"));

                             ui->textEdit->append(QString::fromStdString(environment->printEmpty() + "\n"));

                         }

    } else if (direction == "teleport") {

                     ui->textEdit->append(QString::fromStdString(zork->teleport() + "\n"));

                         if (zork->getCurrentRoom().description == "b") {

                             ui->textEdit->append(QString::fromStdString(zork->printDescriptionOfRoom() + "\n"));

                             ui->textEdit->append(QString::fromStdString(environment->printEmpty() + "\n"));

                         }

    } else if (direction == "teleport") {

                     ui->textEdit->append(QString::fromStdString(zork->teleport() + "\n"));

                         if (zork->getCurrentRoom().description == "f") {

                             ui->textEdit->append(QString::fromStdString(zork->printDescriptionOfRoom() + "\n"));

                             ui->textEdit->append(QString::fromStdString(environment->printEmpty() + "\n"));

                         }

    } else if (direction == "teleport") {

                     ui->textEdit->append(QString::fromStdString(zork->teleport() + "\n"));

                         if (zork->getCurrentRoom().description == "h") {

                             ui->textEdit->append(QString::fromStdString(zork->printDescriptionOfRoom() + "\n"));

                             ui->textEdit->append(QString::fromStdString(environment->printEmpty() + "\n"));

                         }

    } else if (direction == "teleport") {

                     ui->textEdit->append(QString::fromStdString(zork->teleport() + "\n"));

                         if (zork->getCurrentRoom().description == "g") {

                               ui->textEdit->append(QString::fromStdString(zork->printDescriptionOfRoom() + "\n"));

                               ui->textEdit->append(QString::fromStdString(environment->printSafety() + "\n"));

                               ui->textEdit->append(QString::fromStdString(environment->printTheEnd() + "\n"));

                         }

   } else if (direction == "north" || direction == "south" || direction == "east" || direction == "west") {

                     ui->textEdit->append(QString::fromStdString(zork->goToRoom(direction) + "\n"));

                         if (zork->getCurrentRoom().description == "j") {

                             //ui->textEdit->append(QString::fromStdString(zork->printDescriptionOfRoom() + "\n"));

                             ui->textEdit->append(QString::fromStdString(environment->printStarted() + "\n"));

                         }

   } else if (direction == "north" || direction == "south" || direction == "east" || direction == "west") {

                             ui->textEdit->append(QString::fromStdString(zork->goToRoom(direction) + "\n"));

                                 if (zork->getCurrentRoom().description == "d") {

                                     //ui->textEdit->append(QString::fromStdString(zork->printDescriptionOfRoom() + "\n"));

                                     ui->textEdit->append(QString::fromStdString(environment->printEmptyThreeDoor() + "\n"));

                                 }

   } else if (direction == "north" || direction == "south" || direction == "east" || direction == "west") {

                             ui->textEdit->append(QString::fromStdString(zork->goToRoom(direction) + "\n"));

                                 if (zork->getCurrentRoom().description == "i") {

                                     ui->textEdit->append(QString::fromStdString(zork->printDescriptionOfRoom() + "\n"));

                                     ui->textEdit->append(QString::fromStdString(environment->printShield() + "\n"));

                                 }

   } else if (direction == "north" || direction == "south" || direction == "east" || direction == "west") {

                             ui->textEdit->append(QString::fromStdString(zork->goToRoom(direction) + "\n"));

                                 if (zork->getCurrentRoom().description == "e") {

                                     ui->textEdit->append(QString::fromStdString(zork->printDescriptionOfRoom() + "\n"));

                                     ui->textEdit->append(QString::fromStdString(environment->printEmpty() + "\n"));

                                 }

   } else if (direction == "north" || direction == "south" || direction == "east" || direction == "west") {

                             ui->textEdit->append(QString::fromStdString(zork->goToRoom(direction) + "\n"));

                                 if (zork->getCurrentRoom().description == "a") {

                                     ui->textEdit->append(QString::fromStdString(zork->printDescriptionOfRoom() + "\n"));

                                     ui->textEdit->append(QString::fromStdString(environment->printCoffeeMachineRoom() + "\n"));

                                                                                           // coffee black
                                     ui->textEdit->append(QString::fromStdString(environment->coffeeMachine() + "\n"));

                                                                                           // coffee with milk
                                     ui->textEdit->append(QString::fromStdString(environment->coffeeMachine(true) + "\n"));

                                                                                           // coffee with milk and sugar
                                     ui->textEdit->append(QString::fromStdString(environment->coffeeMachine(true, true) + "\n"));

                                                                                           // coffee with sugar
                                     ui->textEdit->append(QString::fromStdString(environment->coffeeMachine(false, true) + "\n"));

                                 }

   } else if (direction == "north" || direction == "south" || direction == "east" || direction == "west") {

                             ui->textEdit->append(QString::fromStdString(zork->goToRoom(direction) + "\n"));

                                 if (zork->getCurrentRoom().description == "c") {

                                     ui->textEdit->append(QString::fromStdString(zork->printDescriptionOfRoom() + "\n"));

                                     ui->textEdit->append(QString::fromStdString(environment->printEmpty() + "\n"));

                                 }

   } else if (direction == "north" || direction == "south" || direction == "east" || direction == "west") {

                             ui->textEdit->append(QString::fromStdString(zork->goToRoom(direction) + "\n"));

                                 if (zork->getCurrentRoom().description == "b") {

                                     ui->textEdit->append(QString::fromStdString(zork->printDescriptionOfRoom() + "\n"));

                                     ui->textEdit->append(QString::fromStdString(environment->printEmpty() + "\n"));

                                 }

   } else if (direction == "north" || direction == "south" || direction == "east" || direction == "west") {

                             ui->textEdit->append(QString::fromStdString(zork->goToRoom(direction) + "\n"));

                                 if (zork->getCurrentRoom().description == "f") {

                                     ui->textEdit->append(QString::fromStdString(zork->printDescriptionOfRoom() + "\n"));

                                     ui->textEdit->append(QString::fromStdString(environment->printEmpty() + "\n"));

                                 }

   } else if (direction == "north" || direction == "south" || direction == "east" || direction == "west") {

                             ui->textEdit->append(QString::fromStdString(zork->goToRoom(direction) + "\n"));

                                 if (zork->getCurrentRoom().description == "h") {

                                     ui->textEdit->append(QString::fromStdString(zork->printDescriptionOfRoom() + "\n"));

                                     ui->textEdit->append(QString::fromStdString(environment->printEmpty() + "\n"));

                                 }

   } else if (direction == "north" || direction == "south" || direction == "east" || direction == "west") {

                             ui->textEdit->append(QString::fromStdString(zork->goToRoom(direction) + "\n"));

                                 if (zork->getCurrentRoom().description == "g") {

                                     ui->textEdit->append(QString::fromStdString(zork->printDescriptionOfRoom() + "\n"));

                                     ui->textEdit->append(QString::fromStdString(environment->printSafety() + "\n"));

                                     ui->textEdit->append(QString::fromStdString(environment->printTheEnd() + "\n"));

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
