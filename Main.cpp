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


int main()
{
    PlayerCharacter player1;
    int intInput; //Reuseable int input 
    string stringInput; //Reuseable string input 
    string playername;
    cout << "'Hello? Stranger, are you there?' \n";
    cout << "type 1 for boy, or 0 for girl! \n";
    cin >> intInput;
    cout << "Glimpses of your memories return, small but significant when compared to the prior blank slate. \n";
    bool boolInput = convertToBool(intInput);
    player1.setGender(boolInput);
    cout << "'Well hello there you dastardly " << player1.getPronounFellow() << "!'\n";
    cout << "'Can you say your name again for me?'\n";
    getline(cin, playername) >> playername;
    player1.setPlayerName(playername);
    cout << "'Nice to remember you " << player1.getPlayerName() << "!'\n";
    cout << "'It takes strength and endurance to survive these wastes, you seem to have been banged up pretty bad stranger...' \n";
    cout << "The wounds twist with pain. \n";
    cout << "'I've bandaged what I can, as you've certainly noticed I don't have much for the pain. You can sit here and die which you will if you do so, or you can get up and come with me. \n";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu 
// Debug program: F5 or Debug > Start Debugging menu
