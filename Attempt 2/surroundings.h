#ifndef SURROUNDINGS_H
#define SURROUNDINGS_H

//#include "Parser.h"
#include <string>

using namespace std;

class Surroundings {
private:
    //Parser parser;

public:
    Surroundings();
    string printEntrance;
    string printCoffeeMachine;
    string coffeeMachine (bool milk = false, bool sugar = false);

};

#endif // SURROUNDINGS_H
