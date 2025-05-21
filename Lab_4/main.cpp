#include "PlayerCharacter.h"

int main() {
    PlayerCharacter* hero = new PlayerCharacter("Holy Light", "Arthas", "pale");
    delete hero;
    return 0;
}
