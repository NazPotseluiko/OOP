#pragma once
#include <iostream>
#include <string>

class GameCharacter {
protected:
    std::string name;
    int health;
public:
    GameCharacter(const std::string& n = "Unknown", int h = 100) : name(n), health(h) {
        std::cout << "GameCharacter constructed\n";
    }
    virtual ~GameCharacter() {
        std::cout << "GameCharacter destructed\n";
    }
    virtual void display() const {
        std::cout << name << " has " << health << " HP.\n";
    }
};
