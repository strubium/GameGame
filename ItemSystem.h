#pragma once

#include <string>

class ItemSystem {
private:
    static float itemDurability;
    static std::string itemName;
    static int itemDamageModifier;
    static bool hasDamageModifier;
    static bool hasDurability;
    static bool isAContainer;
    static int itemID;
    static std::string itemDescription;
};
