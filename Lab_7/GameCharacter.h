#pragma once
#include <iostream>
#include <string>
using namespace std;

class GameCharacter {
protected:
    string name;
    int hp;
public:
    GameCharacter(const string& n = "Unknown", int h = 100)
        : name(n), hp(h) {
        cout << "GameCharacter " << name << " created.\n";
    }

    virtual void attack() {
        cout << name << " attacks!\n";
    }

    virtual void defend() {
        cout << name << " defends!\n";
    }

    virtual ~GameCharacter() {
        cout << "GameCharacter " << name << " destroyed.\n";
    }
};
