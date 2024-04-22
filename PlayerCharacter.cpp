#include "PlayerCharacter.h"

std::string PlayerCharacter::setPlayerName(std::string inputName) {
    playerName = inputName;
    return playerName; // Return the assigned name
}

std::string PlayerCharacter::getPlayerName() {
    return playerName; // Return the assigned name
}


bool PlayerCharacter::setGender(bool inputGender) {
    playerGender = inputGender;
    return playerGender; // Return the assigned gender
}

bool PlayerCharacter::getGender() {
    return playerGender;
}

std::string PlayerCharacter::getPronounSingular() {
    // Check the player's gender and return the corresponding pronoun
    return (playerGender ? "he" : "she"); 
}

std::string PlayerCharacter::getPronounFellow() {
    // Check the player's gender and return the corresponding pronoun
    return (playerGender ? "fellow" : "fellher");
}