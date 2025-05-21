#include "PlayerCharacter.h"

int PlayerCharacter::SetPlayerName(std::string name) {
    playerName = name;
    return 1;
}

int PlayerCharacter::SetSkinColor(std::string color) {
    skinColor = color;
    return 1;
}

PlayerCharacter::PlayerCharacter(std::string power, std::string name, std::string color) {
    SetDivinePower(power);
    SetSkinColor(color);
    SetPlayerName(name);
    std::cout << "Player character " << playerName << " with " << skinColor << " skin has divine power: " << divinePower << "\n";
}
