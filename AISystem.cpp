#include <iostream>
#include <functional>
using namespace std;

class AISystem { // Will handle the AI for human NPCs
private:
    int clothesArmorLevel = 1; //0-3, these could (and prob should) be handled by ItemSystem
    int clothesInsulationLevel = 1; //0-10
    float bodyTemperature = 60; //Body temperature will be affected by clothesInsulationLevel and if they are by a campfire or inside.
    bool wet = false;
    int money = 25; //STC, money system not decided yet
    int moralLevel = 3; //3 High, 2 Medium, 1 Low, 0 Dead

public:
    int getClothesArmorLevel() { return clothesArmorLevel; }
    int getClothesInsulationLevel() { return clothesInsulationLevel; }
    float getBodyTemperature() { return bodyTemperature; }


    void updateBodyTemperature() {
    if wet(true){
    float tempDecreaseRate = 6.7;
    }
    else{
    float tempDecreaseRate = 3.5;
    }

    bodyTemperature -= (tempDecreaseRate-clothesInsulationLevel);
    }
};