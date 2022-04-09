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
	Room *currentRoom;
	void createRooms();
	void printWelcome();
	bool processCommand(Command command);
	void goRoom(Command command);
    void createItems();
    void displayItems();

public:
	ZorkUL();
	void play();
    string go_to_next_room(string direction);
    string teleport();
    void printHelp();
};

#endif /*ZORKUL_H_*/
