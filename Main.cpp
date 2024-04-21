// GabeGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PlayerCharacter.h"
using namespace std;

int main()
{
    PlayerCharacter player1;
    int input;
    bool boolInput;
    cout << "Hello World!\n";
    cout << "Are you a boy, or are you a girl? \n I know ive known you for 11 years, but I still honestly don't know!";
    cout << "type 1 for boy, or 2 for girl!";
    cin >> input;
    if (input == 1) {
        boolInput = true;
    }
    else if (input == 0) {
        boolInput = 0;
    }
    else {
        boolInput = 1;
    };

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
