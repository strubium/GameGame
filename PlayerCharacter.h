#pragma once
#include <string>

class PlayerCharacter {
private:
    double playerMaxHealth;
    double playerCurrentHealth;
    // False is female, True is male.
    bool playerGender;
    std::string playerName;

public:
    std::string setPlayerName(std::string inputName);
    std::string getPlayerName();
    bool setGender(bool inputGender);
    bool getGender();
    std::string getPronounSingular();
    std::string getPronounFellow();
};