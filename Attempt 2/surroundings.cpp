#include "surroundings.h"
#include <string>

using namespace std;

Surroundings::Surroundings() {

}

string printEntrance() {

        return "You fell through a hole into an underground cavern while walking in the forbidden woods"
               "you wake up in a strange cavern that has been sculpted and shaped to resemble a room"
               "The room is completly empty, only rock and walls less a massive wooden door upahead";

                      }

string printCoffeeMachine() {

        return "Chunga";

}

string Surroundings::coffeeMachine(bool milk, bool sugar) {

        string coffee = "Here's your coffee";
          if (milk and sugar) {
            coffee += " with milk and sugar";
          } else if (milk) {
            coffee += " with milk";
          } else if (sugar) {
            coffee += " with sugar";
          }
          return coffee + ".\n";

    }
