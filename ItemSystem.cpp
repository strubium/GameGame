#include "ItemSystem.h"

float ItemSystem::itemDurability = 100;
std::string ItemSystem::itemName = "Hand";
int ItemSystem::itemDamageModifier = 1;
bool ItemSystem::hasDamageModifier = true;
bool ItemSystem::hasDurability = true;
bool ItemSystem::isAContainer = false;
bool ItemSystem::isArmor = false;
int ItemSystem::ArmorLevel = 0;
int ItemSystem::itemID = 0;
std::string ItemSystem::itemDescription = "...";

void ItemSystem::ItemSystem(std::string input_itemName, int input_itemDamageModifier, bool input_hasDamageModifier, bool input_hasDurability, int input_itemDurability, bool input_isAContainer, int input_itemID, std::string input_itemDescription) {
    itemName = input_itemName;
    itemDamageModifier = input_itemDamageModifier;
    hasDamageModifier = input_hasDamageModifier
    hasDurability = input_hasDurability
    itemDurability = input_itemDurability
}
