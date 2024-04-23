#include "MadLib.h"
#include "PlayerCharacter.h"
#include <random>
#include <cmath>

std::string MadLib::randomAmount() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0.0, 3.0);
    double randomNumber = dis(gen);
    int roundedNumber = std::round(randomNumber);
    switch (roundedNumber) {
    case 0:
        return "really";
    case 1:
        return "super";
    case 2:
        return "mega";
    case 3:
        return "ultra";
    default:
        return "mega"; // This should never be reached
    }
}

std::string MadLib::randomDescriber() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0.0, 1.0);
    double randomNumber = dis(gen);
    int roundedNumber = std::round(randomNumber);
    switch (roundedNumber) {
    case 0:
        return "dastardly";
    case 1:
        return "bold";
    default:
        return "dastardly"; // This should never be reached
    }
}

std::string MadLib::responseHighMoral(PlayerCharacter player) {
    if (player.hasAttribute("gangMember") && player.hasAttribute("knownWidely")) {
        return "Holy shit, I don't want any trouble";
    }
    else if (player.hasAttribute("gangMember")) {
        return "I don't want any trouble";
    }
    else if (player.hasAttribute("doesGood") && player.hasAttribute("knownWidely")) {
        return "There " + player.getPronounSingular() + " is!";
    }
    // Ensure that you return a string in all cases.
    return ""; // You might want to handle this differently based on your design.
}