#include <string>
#include <random>
#include <cmath>
#include <iostream>
using namespace std;


class MadLib {
    string randomAmount() {
        random_device rd;
        mt19937 gen(rd());

        uniform_real_distribution<> dis(0.0, 2.0);

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
        default:
            return "really";
        }
    }
};