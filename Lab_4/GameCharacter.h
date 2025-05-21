#ifndef GAMECHARACTER_H
#define GAMECHARACTER_H

#include <iostream>
#include <string>

class GameCharacter {
    std::string name;
    int health;
    std::string ability;

public:
    int SetName(std::string char_name);
    int SetHealth(int hp);
    int SetAbility(std::string abil);
    virtual int Act();

protected:
    int Describe();
};

#endif
