#include "Paladin.h"

Paladin::Paladin(std::string power) {
    SetDivinePower(power);
    std::cout << "Paladin is blessed with: " << divinePower << "\n";
}

Paladin::Paladin() {}

int Paladin::SetDivinePower(std::string power) {
    divinePower = power;
    return 1;
}
