#ifndef WARRIOR_H
#define WARRIOR_H

#include "GameCharacter.h"

class Warrior : public GameCharacter {
public:
    Warrior();
    int Act() override;
};

#endif
