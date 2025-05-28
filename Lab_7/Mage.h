#pragma once
#include "GameCharacter.h"

class Mage : virtual public GameCharacter {
protected:
    int mana;
public:
    Mage(const string& n = "Mage", int h = 80, int m = 100)
        : GameCharacter(n, h), mana(m) {
        cout << "Mage " << name << " created.\n";
    }

    void castSpell() {
        cout << name << " casts a spell with " << mana << " mana.\n";
    }

    virtual ~Mage() {
        cout << "Mage " << name << " destroyed.\n";
    }
};
