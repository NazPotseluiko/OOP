#ifndef PALADIN_H
#define PALADIN_H

#include "Warrior.h"

class Paladin : public Warrior {
protected:
    std::string divinePower;

public:
    Paladin(std::string power);
    Paladin(); // default constructor for inheritance
    int SetDivinePower(std::string power);
};

#endif
