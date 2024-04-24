// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PlayerCharacter.h"
#include "ItemSystem.h"
#include "MadLib.h"

using namespace std;

/**
 * @brief Convert an integer to a boolean value
 * 
 * @param input The input integer value
 * @return true if the input is not equal to 0, false otherwise
 */
bool convertToBool(int input) {
    bool boolInput;
    return boolInput = (input!= 0);
}


void intItems() {
    ItemSystem fireAxe;
}


int main()
{
    PlayerCharacter player1;
    int intInput; // Reusable int input 
    string stringInput; // Reusable string input 
    string playername;
    MadLib madLibInstance; // The MadLib instance

    intItems();
    cout << "Are you a boy, or are you a girl?\n";
    cout << "I know I've known you for 11 years, but I still honestly don't know!\n";
    cout << "Type 1 for boy, or 0 for girl!\n";
    cin >> intInput;
    bool boolInput = convertToBool(intInput);
    player1.setGender(boolInput);

    cout << "Well hello there you " << madLibInstance.randomDescriber() << " " << player1.getPronounFellow() << "!\n";

    cout << "Can you say your name again for me?\n";
    cin.ignore(); // Ignore the newline character left in the input stream
    getline(cin, playername); // Use getline directly
    player1.setPlayerName(playername);

    cout << "Nice to remember you " << player1.getPlayerName() << "!\n";

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu 
// Debug program: F5 or Debug > Start Debugging menu