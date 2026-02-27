#include <iostream>
#include <cstdlib>
#include <cctype>
#include "wizard.h"
#include "sorcerer.h"
#include "warrior.h"
#include "character.h"
#include "utility.h"

using namespace std;

void createCharacter(string, Character*&);
void welcomeScreen();
void pause();
void gameSetting();

// NOTE!!!
/*
    If you do not want to use std:: everytime you want to use cout or cin
    you can type the statement "using namespace std;" at the top of the
    Character class. Then you can use the find/replace feature in each
    file to replace all instances of "std::" with "". That should remove
    all the instances of "std::" in the code.
*/
int main() {
    // variable declaration and initialization
    string myName, yourName;
    Character *player, *opponent;
    int weaponID, attack, seed;
    int hit = 1;


   system("clear");
   cout << "Enter a natural number for random number generation: ";
   cin >> seed;
   srand(seed);
   system("clear");

   welcomeScreen();
   // create your character. choose class and name.
   createCharacter(myName, player);
   // create your oppenents character.
   createCharacter(yourName, opponent);
   gameSetting();

   // loop until either character "dies"
   while(hit != 0)
   {
      // my character calls the attack member function
      // declare whos turn it is
      cout << "It is now " << player->getName() << "'s turn." << endl;
      cout << "******CHOOSE YOUR WEAPON!!!******" << endl;
      attack = player->attack(weaponID, opponent);

      // check for hit
      if (attack == 1) {
         // update hit - call hitByOpponent for other character
         hit = opponent->hitByOpponent(hit);
      }

      if (hit == 1) {
         // declare whos turn it is
         cout << "It is now " << opponent->getName() << "'s turn." << endl;
         cout << "******CHOOSE YOUR WEAPON!!!******" << endl;
         // my opponent calls the attack member function
         attack = opponent->attack(weaponID, player);

         // check for hit
         if (attack == 1) {
               hit = player->hitByOpponent(hit);
               // update hit - call hitByOpponent for my character
         }



      }// if I am still alive
   if (player->remainingHealth == 0)
         player->hitByOpponent(hit);

   else if (opponent->remainingHealth == 0)
         opponent->hitByOpponent(hit);

   } // if either player dies, the while loop breaks


}

void welcomeScreen()
{
   cout << "Welcome to Shawn's CS220 DnD Game!"
        << endl
        << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
        << endl
        << "Game Description: In this game you will choose one of three "
        << endl
        << "characters to play as: Wizard, Sorcerer, or Warrior. "
        << endl
        << "You will then go through a series of turns attempting to "
        << endl
        << "attack your opponent until one's hp falls to 0."
        << endl
        << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
        << endl;

        pause();

}
// I implemented a createCharacter() function to create the character for me
// other than repeating the same lines of code in my main function

void pause() {
   char ch;
   cout << endl << "Type anything to continue...   ";
   cin >> ch;
   cout << endl;
   }

void gameSetting() {
   cout << "You are now traveling to Hanamura! Hanamura "
        << endl
        << "is a quiet japanese village well known for its "
        << endl
        << "overwhelming cherry blossom trees and its lingering "
        << endl
        << "ancestral castle owned by the Shimada ninja clan. "
        << endl
        << "Prepare For BATTLE!!!"
        << endl;
   pause();
   }

void createCharacter(string charName, Character*& one)
{
    int charChoice;

    cout << "===================================" << endl;
    cout << "Choose your character!" << endl;
    cout << "===================================" << endl;

    // Ask the user for character type and name
    cout << endl << "Choose a class:" << endl
         << "1. Wizard " << endl
         << "2. Sorcerer" << endl
         << "3. Warrior" << endl;


    cout << endl << "Enter your choice: #";
    cin >> charChoice;

    // test for character choice.
    while (charChoice > 3 || charChoice < 1) {
      cout << "Invalid input! Try again." << endl;
      cout << "Enter your choice: #";
      cin >> charChoice;
    }

    cout << "Enter your character's name: ";
    cin >> charName;

    // instantiate character object based on the specified character type
    // and use charName as the name of the character.
    if (charChoice == 1)
    {
      // dynamically allocate the Wizard Character and assign it to one
      one = new Wizard(charName);
    }
    else if (charChoice == 2)
    {
      // dynamically allocate the Sorcerer Character and assign it to one
      one = new Sorcerer(charName);
    }
    else if (charChoice == 3)
    {
        // dynamically allocate the Warrior Character and assign it to one
      one = new Warrior(charName);
    }
   pause();
}
