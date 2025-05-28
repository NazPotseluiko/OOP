#pragma once
#include "Mage.h"
#include "Warrior.h"
#include "Paladin.h"

class PlayerCharacter : public Mage, public Warrior, public Paladin {
private:
    int level;
public:
    PlayerCharacter(const string& n, int h, int m, int r, int f, int l)
        : GameCharacter(n, h), Mage(n, h, m), Warrior(n, h, r), Paladin(n, h, f), level(l) {
        cout << "PlayerCharacter " << name << " at level " << level << " created.\n";
    }

    void levelUp() {
        level++;
        cout << name << " leveled up to " << level << "!\n";
    }

    void showStats() {
        cout << "\n--- " << name << "'s Stats ---\n";
        attack();
        defend();
        castSpell();
        slash();
        heal();
        cout << "Level: " << level << "\n";
        cout << "-------------------------\n";
    }

    virtual ~PlayerCharacter() {
        cout << "PlayerCharacter " << name << " destroyed.\n";
    }
};
