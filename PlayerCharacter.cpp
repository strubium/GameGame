#include "PlayerCharacter.h"
#include <iostream>
#include <functional>
using namespace std;
class PlayerCharacter {
private:
    double PlayerCharacter::playerMaxHealth = 100;
    double PlayerCharacter::playerCurrentHealth = 100;
    //False is female, True is male.
    bool PlayerCharacter::playerGender;

public:

    bool PlayerCharacter::setPlayerGender(bool inputGender) { //sets the gender of the player
        playerGender = inputGender;
    }

    bool PlayerCharacter::returnGender() { //gets the gender of the player
        return playerGender;
    }

};