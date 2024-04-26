#pragma once

#include <string>
#include "PlayerCharacter.h"

class MadLib {
public:
    std::string randomAmount();
    std::string randomDescriber();
    std::string responseHighMoral(PlayerCharacter player);
};