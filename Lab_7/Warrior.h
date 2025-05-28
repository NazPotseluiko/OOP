#pragma once
#include "GameCharacter.h"

class Warrior : virtual public GameCharacter {
protected:
    int rage;
public:
    Warrior(const string& n = "Warrior", int h = 120, int r = 50)
        : GameCharacter(n, h), rage(r) {
        cout << "Warrior " << name << " created.\n";
    }

    void slash() {
        cout << name << " slashes with rage " << rage << ".\n";
    }

    virtual ~Warrior() {
        cout << "Warrior " << name << " destroyed.\n";
    }
};
