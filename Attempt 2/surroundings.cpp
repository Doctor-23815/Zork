#include "surroundings.h"
#include <string>

using namespace std;

Surroundings::Surroundings() {

}

string Surroundings::printEntrance() {

        return "You wake up in a strange underground cavern that has been sculpted and shaped to resemble a room.\n"
               "You remember falling through a hole while walking through the forbidden forest and hiting your head against the floor.\n"
               "The room is completly empty, only rock and walls apart from a massive wooden door up ahead.";

                      }

string Surroundings::printEmpty() {

    return "This room is completely empty, nothing but doors and rocks";

}

string Surroundings::printShield() {

    return "You enter what seems to simply be another empty room but something lying against the wall catches your eye."
           "You walk up to it to take a closer look."
           "Its a shield!";

}

string Surroundings::printSafety() {

    return "As you open the door to the next room you begin to see sunlight catching around the edges of the door."
           "You run in and see a massive crack in the roof of the cave with a rope hanging through it."
           "You run towards it grabbing the rope and climb to safety"
           "Now standing above the giant fissure in the ground you run home swearing never to return"
           "Who knows what else could have been lurking down there";

}

string Surroundings::printTheEnd() {

    return "The End";

}

string Surroundings::printStarted() {


    return "Your back where you started!";
}

string Surroundings::printEmptyThreeDoor() {

    return "The next room you enter looks identical to the first but this one has 3 doors instead of 1.";

}

string Surroundings::printCoffeeMachineRoom() {

        return "The next room you enter looks identical to the first but this one has 3 doors instead of 1."
               "You hear a faint humming and look around to see a vending machine in the corner of the room."
               "You approach it slowly, the humming from the incandescent light bulb getting louder and louder";

}

string Surroundings::coffeeMachine(bool milk, bool sugar) {

        string coffee = "The label says it has coffee";
        string empty = "but the only can left in the machine has had its label torn off, weird...";

          if (milk and sugar) {
            coffee += " with milk and sugar";
          } else if (milk) {
            coffee += " with milk";
          } else if (sugar) {
            coffee += " with sugar";
          }
          return coffee + empty;

    }
