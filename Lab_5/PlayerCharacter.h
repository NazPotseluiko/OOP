#pragma once
#include "Mage.h"
#include "Warrior.h"

class PlayerCharacter : public Mage, public Warrior {
    std::string skinColor;
public:
    PlayerCharacter(const std::string& n, int h, const std::string& s, const std::string& w, const std::string& sc)
        : GameCharacter(n, h), Mage(n, h, s), Warrior(n, h, w), skinColor(sc) {
        std::cout << "PlayerCharacter constructed\n";
    }
    ~PlayerCharacter() {
        std::cout << "PlayerCharacter destructed\n";
    }
    void display() const override {
        GameCharacter::display();
        std::cout << "Skin color: " << skinColor << "\n";
        castSpell();
        attack();
    }
};
