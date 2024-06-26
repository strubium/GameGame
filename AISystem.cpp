#include "AISystem.h"
#include "ItemSystem.h"
#include <iostream>
#include <functional>
using namespace std;

class AISystem { // Will handle the AI for human NPCs (Ex: not zombies or dogs)
private:
    int clothesArmorLevel = 1; //0-3, these could (and prob should) be handled by ItemSystem
    int clothesInsulationLevel = 1; //0-10
    float bodyTemperature = 60; //Body temperature will be affected by clothesInsulationLevel and if they are by a campfire or inside.
    bool wet = false;
    int money = 25; //STC, money system not decided yet
    int moralLevel = 3; //3 High, 2 Medium, 1 Low, 0 Dead
    string npcName = "gabe"; //This is the name of the NPC that other NPCs will use refer to this NPC.
    int npcID = 0; //Internal ID for the NPC.
    string npcType = "dude"; //Types: army, gang1, gang2, gang3, gang4, gang5, civilian1, civilian2, civilian3
    bool npcGender = true; //true = male, false = female
    float tempDecreaseRate = 3.5;
    int heldItemID = 1;
    double MaxNPCHealth = 100; //no need for mass floatation we will say have thousands of values but not really the case if you know what you are doing.
    double CurrentNPCHealth = 100;

    int AISystem::getClothesArmorLevel() { return clothesArmorLevel; }
    int AISystem::getClothesInsulationLevel() { return clothesInsulationLevel; }
    float AISystem::getBodyTemperature() { return bodyTemperature; }


    void AISystem::updateBodyTemperature() {
    if (AISystem::wet = true) {
    AISystem::tempDecreaseRate = 6.7;
    }
    else {
    AISystem::tempDecreaseRate = 3.5;
    }
    AISystem::bodyTemperature -= (AISystem::tempDecreaseRate- AISystem::clothesInsulationLevel);
    }
};
