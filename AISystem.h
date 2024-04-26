#pragma once

#include <string>

class AISystem {
private:
    static int clothesArmorLevel; // 0-3, these could (and prob should) be handled by ItemSystem
    static int clothesInsulationLevel; // 0-10
    static float bodyTemperature; // Body temperature will be affected by clothesInsulationLevel and if they are by a campfire or inside.
    static bool wet;
    static int money; // STC, money system not decided yet
    static int moralLevel; // 3 High, 2 Medium, 1 Low, 0 Dead
    static std::string npcName; // This is the name of the NPC that other NPCs will use refer to this NPC.
    static int npcID; // Internal ID for the NPC.
    static std::string npcType; // Types: army, gang1, gang2, gang3, gang4, gang5, civilian1, civilian2, civilian3
    static bool npcGender; // true = male, false = female
    static float tempDecreaseRate;

public:
    static int getClothesArmorLevel();
    static int getClothesInsulationLevel();
    static float getBodyTemperature();

    static void updateBodyTemperature();
};