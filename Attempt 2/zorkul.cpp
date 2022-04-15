#include <iostream>

using namespace std;
#include "zorkul.h"

// Instance of a global variable.
string mapInfo = "                                 \n"
                 "              [h] --- [f] --- [g]\n"
                 "                          |      \n"
                 "              [c] --- [a] --- [b]\n"
                 "                          |      \n"
                 "              [i] --- [d] --- [e]\n"
                 "                          |      \n"
                 "                         [j]     \n";

string &mapReference = mapInfo;

/*
int main(int argc, char argv[]) {
    ZorkUL temp;
    temp.play();
    return 0;
}
*/

ZorkUL::ZorkUL() {
    createRooms();
}

// Implementation of array of pointers.
void ZorkUL::createRooms()  {
    Room *a, *b, *c, *d, *e, *f, *g, *h, *i, *j;

    a = new Room("a");
        a->addItem(new Item("Coffee", 3, 33));
    b = new Room("b");
    c = new Room("c");
    d = new Room("d");
    e = new Room("e");
        e->addItem(new Item("Blanket", 3));
        e->addItem(new Item("Torch", 4));
        e->addItem(new Item("Backpack", 3));
        e->addItem(new Item("Book", 4));
    f = new Room("f");
    g = new Room("g");
    h = new Room("h");
    i = new Room("i");
        i->addItem(new Item("Shield", 1, 11));
    j = new Room("j");
        j->addItem(new Item("Map", 1, 11));

//             (N, E, S, W)
    a->setExits(f, b, d, c);
    b->setExits(NULL, NULL, NULL, a);
    c->setExits(NULL, a, NULL, NULL);
    d->setExits(a, e, j, i);
    e->setExits(NULL, NULL, NULL, d);
    f->setExits(NULL, g, a, h);
    g->setExits(NULL, NULL, NULL, f);
    h->setExits(NULL, f, NULL, NULL);
    i->setExits(NULL, d, NULL, NULL);
    j->setExits(d, NULL, NULL, NULL);

    array_of_rooms.push_back(*a);
    array_of_rooms.push_back(*b);
    array_of_rooms.push_back(*c);
    array_of_rooms.push_back(*d);
    array_of_rooms.push_back(*e);
    array_of_rooms.push_back(*f);
    array_of_rooms.push_back(*g);
    array_of_rooms.push_back(*h);
    array_of_rooms.push_back(*i);
    array_of_rooms.push_back(*j);

        currentRoom = j;

        }

/**
 *  Main play routine.  Loops until end of play.
 */
string ZorkUL::printWelcome() {
    return "Welcome to Zork: The Amalgamation!\n\n"
           "You may now begin to play.\n\n"
           "If you have any problems with the controls please press the info button for help.";
}

string ZorkUL::printDescriptionOfRoom() {

    return "" + currentRoom->longDescription();

}

// Function that calls the global variable.
string ZorkUL::mapDisplay() {

        return mapInfo;

    }

string ZorkUL::printHelp() {
    return "Use the directional keys to move around the dungeon and the teleport key to teleport to a random room.\n";
}

// Function that calls the global variable.
string ZorkUL::printOnTheDoor() {

    return "Nailed to the door is a piece of parchment with some markings on it:\n\n" + mapReference;

}

string ZorkUL::teleport() {
    currentRoom = &array_of_rooms.at((int) rand() % array_of_rooms.size());

    if (currentRoom == nullptr) {
        return "teleport failed!";
    } else {
        return currentRoom->longDescription();
    }
}

string ZorkUL::goToRoom(string direction) {
    Room* nextRoom = currentRoom->nextRoom(direction);

    if (nextRoom == NULL) {
        return "You bump your head against a wall.";
    } else {
        currentRoom = nextRoom;
        return currentRoom->longDescription();
    }
}

Room ZorkUL::getCurrentRoom() {

    return *currentRoom;

}
