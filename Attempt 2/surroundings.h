#ifndef SURROUNDINGS_H
#define SURROUNDINGS_H

#include <string>

using namespace std;

class Surroundings {
private:

public: // Some instances of public.
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
    string printPastTwo();
    string printAverage();
    string coffeeMachine(bool milk = false, bool sugar = false);
    string printCalculator();
};

#endif // SURROUNDINGS_H
