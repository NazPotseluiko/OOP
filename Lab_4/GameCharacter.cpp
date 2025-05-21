#include "GameCharacter.h"

int GameCharacter::SetName(std::string char_name) {
    name = char_name;
    return 1;
}

int GameCharacter::SetHealth(int hp) {
    health = hp;
    return 1;
}

int GameCharacter::SetAbility(std::string abil) {
    ability = abil;
    return 1;
}

int GameCharacter::Act() {
    std::cout << name << " does something undefined...\n";
    return 1;
}

int GameCharacter::Describe() {
    std::cout << name << " has " << health << " HP and special ability: " << ability << ".\n";
    return 1;
}
