#pragma once
#include "GameCharacter.h"

class Mage : virtual public GameCharacter {
protected:
    std::string spell;
public:
    Mage(const std::string& n = "Unknown", int h = 100, const std::string& s = "Fireball")
        : GameCharacter(n, h), spell(s) {
        std::cout << "Mage constructed\n";
    }
    ~Mage() {
        std::cout << "Mage destructed\n";
    }
    void castSpell() const {
        std::cout << name << " casts " << spell << "!\n";
    }
};
