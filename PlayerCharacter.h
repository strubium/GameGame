#pragma once //stuff for the header file, btw this is a header file
#include<string>
#include <functional>
using namespace std;

class PlayerCharacter {
private:
    double playerMaxHealth;
    double playerCurrentHealth;
    //False is female, True is male.
    bool playerGender;

public:
    bool setPlayerGender(bool inputGender);
    bool returnGender();

};