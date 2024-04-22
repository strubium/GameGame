#include <string>
#include "MadLib.h"
#include <random>
#include <cmath>
#include <iostream>
using namespace std;


class MadLib {
    string MadLib::randomAmount() {
        random_device rd;
        mt19937 gen(rd());

        uniform_real_distribution<> dis(0.0, 3.0);

        double randomNumber = dis(gen);

        // Round the number
        int roundedNumber = round(randomNumber);
        switch (roundedNumber) {
        case 1:
            return "really";
            break;
        case 2:
            return "super";
            break;
        case 3:
            return "mega";
            break;
        case 4:
            return "ultra";
            break;
        default:
            return "mega";
        }
    }
};