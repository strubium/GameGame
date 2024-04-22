#pragma once
#include <string>
#include <vector>

class PlayerCharacter {
private:
    double playerMaxHealth;
    double playerCurrentHealth;
    // False is female, True is male.
    bool playerGender;
    std::string playerName;
    vector<std::string> playerAttributes;

public:
    std::string setPlayerName(std::string inputName);
    std::string getPlayerName();
    bool setGender(bool inputGender);
    bool getGender();
    std::string getPronounSingular();
    std::string getPronounFellow();
    void addPlayerAttribute(std::string inputAttribute)
    void removePlayerAttribute(std::string inputAttribute)
    bool hasAttribute(std::string inputAttribute)
};