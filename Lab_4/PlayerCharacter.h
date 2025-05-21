#ifndef PLAYERCHARACTER_H
#define PLAYERCHARACTER_H

#include "Paladin.h"

class PlayerCharacter : public Paladin {
    std::string playerName;
    std::string skinColor;

public:
    PlayerCharacter(std::string power, std::string name, std::string color);
    int SetPlayerName(std::string name);
    int SetSkinColor(std::string color);
};

#endif
