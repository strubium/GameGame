#pragma once

#include <string>

class ItemSystem {
private:
    static int itemDurability;
    static std::string itemName;
    static int itemDamageModifier;
    static bool hasDamageModifier;
    static bool hasDurability;
    static bool isAContainer;
    static int itemID;
    static std::string itemDescription;

public:
    void createItem(std::string itemName, int itemDamageModifier, bool hasDamageModifier, bool hasDurability, int itemDurability, bool isAContainer, int itemID, std::string itemDescription);
};;
