﻿// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PlayerCharacter.h"
#include "ItemSystem.h"
#include "MadLib.h"

using namespace std;

bool convertToBool(int input) {
    bool boolInput;
    return boolInput = (input != 0);
}


int main()
{
    PlayerCharacter player1;
    int input;
    string playername;
    cout << "Are you a boy, or are you a girl? \n I know I've known you for 11 years, but I still honestly don't know! \n";
    cout << "type 1 for boy, or 0 for girl! \n";
    cin >> input;
    bool boolInput = convertToBool(input);
    player1.setGender(boolInput);
    cout << "Well hello there you dastardly " << player1.getPronounFellow() << "!\n";
    cout << "Can you say your name again for me?\n";
    getline(cin, playername) >> playername;
    player1.setPlayerName(playername);
    cout << "Nice to remember you " << player1.getPlayerName() << "!\n";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu 
// Debug program: F5 or Debug > Start Debugging menu