#include "surroundings.h" // One instance of the implementation of Header files (inclusion guards).
#include <string>
#include <iostream>
#include <QCoreApplication>
#include <QTextStream>
#include <QtWidgets/QWidget>
#include <QDebug>

using namespace std; // One instance of the implementation of namespaces.

Surroundings::Surroundings() {

}

string Surroundings::printEntrance() {

        return "You wake up in a strange underground cavern that has been sculpted and shaped to resemble a room.\n"
               "You remember falling through a hole while walking through the forbidden forest and hiting your head against the floor.\n"
               "The room is completly empty, only rock and walls apart from a massive wooden door up ahead.";

                      }

string Surroundings::printEmpty() {

    return "This room is completely empty, nothing but doors and rocks.\n";

}

string Surroundings::printShield() {

    return "You enter what seems to simply be another empty room but something lying against the wall catches your eye.\n"
           "You walk up to it to take a closer look.\n"
           "Its a shield!\n";

}

string Surroundings::printSafety() {

    return "As you open the door to the next room you begin to see sunlight catching around the edges of the door.\n"
           "You run in and see a massive crack in the roof of the cave with a rope hanging through it.\n"
           "You run towards it grabbing the rope and begin climbing to safety.\n"
           "Now standing above the giant fissure in the ground you run home swearing never to return.\n"
           "Who knows what else could have been lurking down there...";

}

string Surroundings::printTheEnd() {

    return "The End\n";

}

string Surroundings::printStarted() {


    return "Your back where you started!\n";
}

string Surroundings::printEmptyThreeDoor() {

    return "The next room you enter looks identical to the first but this one has 3 doors instead of 1.";

}

string Surroundings::printCoffeeMachineRoom() {

    return "The next room you enter looks identical to the first but this one has 3 doors instead of 1.\n"
           "You hear a faint humming and look around to see a vending machine in the corner of the room.\n"
           "You approach it slowly, the humming from the incandescent light bulb getting louder and louder.";

}

// Example of default parameters.
string Surroundings::coffeeMachine(bool milk, bool sugar) {

          string coffee;

          if (milk and sugar) {
            coffee += " coffee with milk and sugar";
          } else if (milk) {
            coffee += " coffee with milk";
          } else if (sugar) {
            coffee += " coffee with sugar";
          } else {
            coffee += " black coffee";
          }

          return coffee;

    }

string Surroundings::printCoffeeList() {

    string partOne = "The label says it has ";
    string partTwo = " but the only can left in the machine has had its label torn off, weird...";

    return partOne + coffeeMachine() + ", " + coffeeMachine(false, true) + ", " + coffeeMachine(true) + " and " + coffeeMachine(true, true) + partTwo;

}

string Surroundings::printPast() {

    return "As you enter the next room you see objects scattered all across the floor of the cave.\n"
           "There's a blanket, torch and a backpack with a maths book in it.\n\n"
           "Was somebody else down here?\n\n"
           "You open the maths book and flip to a random page.\n"
           "It reads, \"To get the average of 3 numbers add them all together then divide by the amount of numbers you want to find the average for.\"\n"
           "And shows an example below it:\n"
           "The numbers  0x16cebe83200 ,  0x16cebe83300  and  0x16cebe83040  have an average number of  7.\n"
           "The numbers used in the example are like no numbers you've ever seen.\n\n"
           "What is going on down here?";

}

/* Was originally going to have a lock on a door that needed the answer to the question posed in this function
 * but ran out of time and chose to focus more on the C++ aspects of the code rather than the story.
 * The question was meant to randomised so a different answer would be required per game.*/
// Implementation of Memory Management and Pointers.
string Surroundings::printAverage() {

int *ptr1;
int *ptr2;
int *ptr3;
int average;

ptr1 = new int;
ptr2 = new int;
ptr3 = new int;

*ptr1 = 4;
*ptr2 = 8;
*ptr3 = 9;

average = (*ptr1 + *ptr2 + *ptr3) / 3;

cout << "The numbers " << ptr1 << ", " << ptr2 << " and " << ptr3 << " have an average number of " << average;

delete ptr1;
delete ptr2;
delete ptr3;

return "";

}
/*
template <typename T>
T printShape(T shape) {

    return

}
*/
