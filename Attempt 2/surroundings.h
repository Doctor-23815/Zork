#ifndef SURROUNDINGS_H
#define SURROUNDINGS_H

//#include "Room.h"
//#include "ZorkUL.h"
//#include "Parser.h"
#include <string>

using namespace std;

class Surroundings {
private:
    //Parser parser;
    //Room *currentRoom;

public:
    Surroundings();
    string printEntrance();
    string printCoffeeMachineRoom();
    string printCoffeeList();
    string printEmpty();
    string printShield();
    string printStarted();
    string printEmptyThreeDoor();
    string printSafety();
    string printTheEnd();
    string printPast();
    string printAverage();
    string coffeeMachine (bool milk = false, bool sugar = false);

};

#endif // SURROUNDINGS_H
