#include "Warrior.h"

Warrior::Warrior() {
    SetName("Warrior");
    SetHealth(150);
    SetAbility("Sword Mastery");
    Describe();
    Act();
}

int Warrior::Act() {
    std::cout << "Warrior strikes with a powerful slash!\n";
    return 1;
}
