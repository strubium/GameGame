#include <string>
#include "MadLib.h"
#include "PlayerCharacter.h"
#include <random>
#include <cmath>
#include <iostream>
using namespace std;


class MadLib {
/**
 * @brief Returns a random amount adverb
 * @return A random adverb
 */
string MadLib::randomAmount() {
    random_device rd;
    mt19937 gen(rd());

    uniform_real_distribution<> dis(0.0, 3.0);

    double randomNumber = dis(gen);

    // Round the number
    int roundedNumber = round(randomNumber);
    switch (roundedNumber) {
    case 0:
        return "really";
        break;
    case 1:
        return "super";
        break;
    case 2:
        return "mega";
        break;
    case 3:
        return "ultra";
        break;
    default:
        return "mega";
    }
}
/**
 * @brief Returns a random "high moral" response
 * @return A random high moral response
 */
string MadLib::responseHighMoral(PlayerCharacter player) {
        if(player.hasAttribute("gangMember")){
            return "I don't want any trouble";
        }
        else if(player.hasAttribute("gangMember") and player.hasAttribute("knownWidely")){
            return "Holy shit, I don't want any trouble";
        }
        else if(player.hasAttribute("doesGood") and player.hasAttribute("knownWidely")){
                return "There "+std::to_string(getPronounSingular()) + "is!";
        }
}
};