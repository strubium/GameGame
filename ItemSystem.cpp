#include "ItemSystem.h"
#include <iostream>
#include <functional>
using namespace std;

class ItemSystem {
private:
    int ItemSystem::itemDurability = 100;
    string ItemSystem::itemName = "Hand";
    int ItemSystem::itemDamageModifier = 1;
    bool ItemSystem::hasDamageModifier = true;
    bool ItemSystem::hasDurability = true;
    bool ItemSystem::isAContainer = false;
    int ItemSystem::itemID = 0;
    string ItemSystem::itemDescription = "...";
public:
    void createItem(string itemName, int itemDamageModifier, bool hasDamageModifier, bool hasDurability, int itemDurability, bool isAContainer, int itemID, string itemDescription){

    }
};
