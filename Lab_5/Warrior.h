#pragma once
#include "GameCharacter.h"

class Warrior : virtual public GameCharacter {
protected:
    std::string weapon;
public:
    Warrior(const std::string& n = "Unknown", int h = 100, const std::string& w = "Sword")
        : GameCharacter(n, h), weapon(w) {
        std::cout << "Warrior constructed\n";
    }
    ~Warrior() {
        std::cout << "Warrior destructed\n";
    }
    void attack() const {
        std::cout << name << " attacks with " << weapon << "!\n";
    }
};
