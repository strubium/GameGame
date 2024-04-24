#include "AISystem.h"
#include <iostream>
#include <functional>
using namespace std;

    int AISystem::clothesArmorLevel = 1; //0-3, these could (and prob should) be handled by ItemSystem
    int AISystem::clothesInsulationLevel = 1; //0-10
    float AISystem::bodyTemperature = 60; //Body temperature will be affected by clothesInsulationLevel and if they are by a campfire or inside.
    bool AISystem::wet = false;
    int AISystem::money = 25; //STC, money system not decided yet
    int AISystem::moralLevel = 3; //3 High, 2 Medium, 1 Low, 0 Dead
    string AISystem::npcName = "gabe"; //This is the name of the NPC that other NPCs will use refer to this NPC.
    int AISystem::npcID = 0; //Internal ID for the NPC.
    string AISystem::npcType = "dude"; //Types: army, gang1, gang2, gang3, gang4, gang5, civilian1, civilian2, civilian3
    bool AISystem::npcGender = true; //true = male, false = female
    float AISystem::tempDecreaseRate = 3.5;

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