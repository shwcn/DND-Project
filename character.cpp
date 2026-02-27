#include "character.h"
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// character constuctor takes in the name of the character
Character::Character(std::string name)
{
    charName = name;
    //cout << "character constructor" << endl;
}


// setName function can be used to change the character's name
void Character::setName(std::string name)
{
    charName = name;
    //cout << "setName member function" << endl;
}

// get name can be used to retrive the character's name
std::string Character::getName()
{
    return charName;
}

int Character::selectWeapon()
{
    int weaponID;
    // loop through all the weapons a character has and print them out
    for (int i=0; i<MAXNUMOFWEAPONS; i++)
        std::cout << i+1 << ". " << weapons[i] << std::endl;

    // get a weapon based on the users choice
    do
    {
       cout << "Select a weapon: ";
       cin >> weaponID;
       //std::cout << std::endl;
    } while (weaponID < 1 || weaponID > 10);

    cout << endl;
    // return the ID of that weapon
    return (weaponID-1);
}

int Character::attack(int weaponID, Character* opponent)
{
    int tenSidedDiceRoll;

    // calls the selectWeapon function and make the character select a weapon
    weaponID = selectWeapon();
    // tenSidedDiceRoll = a random value between 1 and 20
    tenSidedDiceRoll = (rand() % 20) + 1;
    // print out what number was rolled
    cout << charName << " rolled a " << tenSidedDiceRoll << "!" << endl;
    // print out the character name, weapon used and the weapon's action
    cout << charName << " used a " << weapons[weaponID] << weaponAction[weaponID] << opponent->getName() << endl;
    // if the roll number was greater than attack strength display a message
    if (tenSidedDiceRoll > opponent->attackStrength) {
      cout << "The attack was succeful! " << opponent->getName() << " was injured!" << endl;
      return 1;
   }
    // indicating the hit results and the opponent name return a 1
   else
   {
      cout << "Attack on " << opponent->getName() << " has MISSED!" << endl;
      return 0;
   }

    // if the roll was not greater than the attack strength
    // display the non hit results and the opponent's name, return 0
}

int Character::getHitPoints() {

      return remainingHealth;
   }

int Character::hitByOpponent(int hitPoint) {
    // reduce the remaining health points by the hit point
      remainingHealth = remainingHealth - hitPoint;

    // checks if the character has any health points left
    // if yes, display hit was success and current health points return 1
    if (remainingHealth > 0)
    {
      cout << charName << " has " << remainingHealth << " remaining HP." << endl << endl;

      return 1;
    }

    // if no, display character name, "End of Character" message, return 0
    else if (remainingHealth < 0)
    {
      cout << charName << " has been defeated!" << endl;

      return 0;
    }

}
