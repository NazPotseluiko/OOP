#include "Mage.h"

Mage::Mage() {
    SetName("Mage");
    SetHealth(80);
    SetAbility("Fireball");
    Describe();
    Act();
}

int Mage::Act() {
    std::cout << "Mage casts a blazing fireball!\n";
    return 1;
}
