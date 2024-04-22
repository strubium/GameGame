#pragma once //stuff for the header file, btw this is a header file
#include<string>
#include <functional>
using namespace std;


class ItemSystem {
    int itemDurability;
    string itemName;
    int itemDamageModifier;
    bool hasDamageModifier;
    bool hasDurability;
    bool isAContainer;
    int itemID;
    string itemDescription;
};
