// GabeGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PlayerCharacter.h"
#include "ItemSystem.h"
using namespace std;

int main()
{
    PlayerCharacter player1;
    int input;
    bool boolInput;
    string pronounHe_Her; // TODO: FIX ME, do me, fix code
    /*       ██              
           ██  ██            
         ▄▄▀▀  ▀▀▄▄          
       ▄▄██      ▀▀▄▄▄▄      
     ▗ ▛▛▛▛  ▛▛██      
      ██              ██      
      ██  ██    ██    ██      ? no fix the thing it might be that the file is not where the header files are and tahat makight 
      ██              ██      
      ██              ██      
     ▀▀▄▄▄▄▄▄▄▄▙▄▄▄▄███      This is the sigma spirit of whales
      ███████████▛████      
     ██            ▜█      
      ████            ██      
       ▘██          ▟▟██      
        ██▄▄▄▄    ▄▄████      
        ▀▀██▀▀▄▄▄▄▝▀▀▀██    
          ██    T      ███▘   
          ██          ██                                
            */
    string playerFellowOrFellher;
    cout << "Hello World!\n";
    cout << "Are you a boy, or are you a girl? \n I know ive known you for 11 years, but I still honestly don't know! \n";
    cout << "type 1 for boy, or 2 for girl! \n";
    cin >> input;
    if (input == 1) {
        boolInput = true;
    }
    else if (input == 0) {
        boolInput = false;
    }
    else {
        boolInput = true;
    };
    if (boolInput) {
        pronounHe_Her = "he";
        playerFellowOrFellher = "fellow";
    }
    else {  //stfu im dumb - gabe COMPILE NOW! I WANT T COM{PILE AGAIN PERAHPS SI CAN FREAUIR A SIGNOR PLEASE COMPILE IT MIGHT ORK I T}
        pronounHe_Her = "she";
        playerFellowOrFellher = "fellher";
    };
    cout << "Well hello there you dastardly " << playerFellowOrFellher << "!";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu Please compile right now or else and also I thinl thats the header of itemssystem might not be in the itensystem file
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
