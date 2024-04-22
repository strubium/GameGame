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
};