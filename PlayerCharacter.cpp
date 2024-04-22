#include "PlayerCharacter.h"
#include <vector> 


vector<std::string> playerAttributes;

/**
 * @brief Sets the player's name
 * 
 * @param inputName The player's name
 * @return std::string The player's name
 */
std::string PlayerCharacter::setPlayerName(std::string inputName) {
    playerName = inputName;
    return playerName; // Return the assigned name
}

/**
 * @brief Returns the player's name
 * 
 * @return std::string The player's name
 */
std::string PlayerCharacter::getPlayerName() {
    return playerName; // Return the assigned name
}


/**
 * @brief Sets the player's gender
 * 
 * @param inputGender The player's gender
 * @return true if the player is male, false if the player is female
 */
bool PlayerCharacter::setGender(bool inputGender) {
    playerGender = inputGender;
    return playerGender; // Return the assigned gender
}

/**
 * @brief Returns the player's gender
 * 
 * @return true if the player is male, false if the player is female
 */
bool PlayerCharacter::getGender() {
    return playerGender;
}

/**
 * @brief Returns the singular form of the player's pronoun based on their gender.
 *
 * @return std::string The singular form of the player's pronoun.
 */
std::string PlayerCharacter::getPronounSingular() {
    // Check the player's gender and return the corresponding pronoun
    return (playerGender? "he" : "she"); 
}

/**
 * @brief Returns the singular form of the player's pronoun based on their gender.
 *
 * @return std::string The singular form of the player's pronoun.
 */
std::string PlayerCharacter::getPronounSingular() {
    // Check the player's gender and return the corresponding pronoun
    return (playerGender? "he" : "she"); 
}

std::string PlayerCharacter::getPronounFellow() {
    // Check the player's gender and return the corresponding pronoun
    return (playerGender? "fellow" : "fellher");
}
/**
 * @brief Adds an attribute to the player's list of attributes.
 *
 * @param inputAttribute The attribute to add to the player's list.
 */
void PlayerCharacter::addPlayerAttribute(std::string inputAttribute) {
    playerAttributes.push_back(inputAttribute);
}