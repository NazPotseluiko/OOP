#pragma once
#include "GameCharacter.h"

class Paladin : virtual public GameCharacter {
protected:
    int faith;
public:
    Paladin(const string& n = "Paladin", int h = 100, int f = 70)
        : GameCharacter(n, h), faith(f) {
        cout << "Paladin " << name << " created.\n";
    }

    void heal() {
        cout << name << " heals using faith " << faith << ".\n";
    }

    virtual ~Paladin() {
        cout << "Paladin " << name << " destroyed.\n";
    }
};
