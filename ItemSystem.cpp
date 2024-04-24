#include "ItemSystem.h"

int ItemSystem::itemDurability = 100;
std::string ItemSystem::itemName = "Hand";
int ItemSystem::itemDamageModifier = 1;
bool ItemSystem::hasDamageModifier = true;
bool ItemSystem::hasDurability = true;
bool ItemSystem::isAContainer = false;
int ItemSystem::itemID = 0;
std::string ItemSystem::itemDescription = "...";

void ItemSystem::createItem(std::string itemName, int itemDamageModifier, bool hasDamageModifier, bool hasDurability, int itemDurability, bool isAContainer, int itemID, std::string itemDescription) {
    // Implementation of createItem method goes here 
    // If this is a constructor wouldnt it be more efficient to make it so?
}
