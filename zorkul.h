#ifndef ZORKUL_H_
#define ZORKUL_H_

#include "Command.h"
#include "Parser.h"
#include "Room.h"
#include "item.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class ZorkUL {
private:
    vector <Room> array_of_rooms;
    Parser parser;
    void createRooms();
    bool processCommand(Command command);
    void goRoom(Command command);
    void createItems();
    void displayItems();
    Room *currentRoom;

public:
    ZorkUL();
    void play();
    string goToRoom(string direction);
    string teleport();
    string printWelcome();
    string printHelp();
    string mapDisplay();
    Room getCurrentRoom();
};

#endif /*ZORKUL_H_*/
