#ifndef COMMAND_H_
#define COMMAND_H_

#include <exception>
#include <string>
using namespace std;

class Command : public exception { // Implementation of Programmer defined exceptions.
private:
    string commandWord;
    string secondWord;

public:
    Command(string firstWord, string secondWord);
    string getCommandWord();
    string getSecondWord();
    bool isUnknown();
    bool hasSecondWord();
};

#endif /*COMMAND_H_*/
