#include "PlayerCharacter.h"

int main() {
    cout << "Creating player character...\n";
    PlayerCharacter player("Arthur", 150, 120, 80, 90, 1);

    player.showStats();
    player.levelUp();

    cout << "\nEnd of program.\n";
    return 0;
}
