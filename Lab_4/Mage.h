#ifndef MAGE_H
#define MAGE_H

#include "GameCharacter.h"

class Mage : public GameCharacter {
public:
    Mage();
    int Act() override;
};

#endif
