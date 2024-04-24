#pragma once

#include <string>

class ItemSystem {
private:
    int itemDurability;
    std::string itemName;
    int itemDamageModifier;
    bool hasDamageModifier;
    bool hasDurability;
    bool isAContainer;
    int itemID;
    std::string itemDescription;

public:
    void createItem(std::string itemName, int itemDamageModifier, bool hasDamageModifier, bool hasDurability, int itemDurability, bool isAContainer, int itemID, std::string itemDescription);
};;
