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
    bool isArmor;
    int ArmorLevel;
    int itemID;
    std::string itemDescription;

public:
    void ItemSystem(std::string input_itemName, int input_itemDamageModifier, bool input_hasDamageModifier, bool input_hasDurability, int input_itemDurability, bool input_isAContainer, int input_itemID, std::string input_itemDescription);
};;
