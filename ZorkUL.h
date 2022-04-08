#ifndef ZORKUL_H_
#define ZORKUL_H_

#include "Command.h"
#include "Parser.h"
#include "Room.h"
#include "item.h"
#include <iostream>
#include <string>

using namespace std;

class ZorkUL {
private:
        Parser parser;
    vector<Room*> array_of_rooms;
        Room *currentRoom;
        void createRooms();
        void printWelcome();
        bool processCommand(Command command);
        void printHelp();
        void goRoom(Command command);
        void createItems();
        void displayItems();
        void teleport(string direction);
        void player_name(string player_one = "Darragh Walsh");

public:
	ZorkUL();
	void play();
	string go(string direction);
};

#endif /*ZORKUL_H_*/
