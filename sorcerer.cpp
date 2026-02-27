#include "sorcerer.h"
#include <iostream>
using namespace std;
// When Sorcerer constructor is called, instantiate the Character
// constructor and pass the name from the Sorcerer constuctor into it
Sorcerer::Sorcerer(string name) :Character(name)
{
   attackStrength = 11;
   endurance = 14;
   remainingHealth = endurance;
    // Assign the values for the weapon and weapon action arrays
    weapons[0] = "wand";
    weapons[1] = "thunderclap";
    weapons[2] = "fire bolt";
    weapons[3] = "dagger";
    weapons[4] = "dart";
    weapons[5] = "sling";
    weapons[6] = "quarterstaffs";
    weapons[7] = "light crossbow";
    weapons[8] = "frostbite spell";
    weapons[9] = "acid splash spell";

    weaponAction[0] = " to shoot magic at ";
    weaponAction[1] = " to cast a lightning spell at ";
    weaponAction[2] = " to cast a fire spell at ";
    weaponAction[3] = " piercing ";
    weaponAction[4] = " piercing ";
    weaponAction[5] = " impaling ";
    weaponAction[6] = " bludgeoning ";
    weaponAction[7] = " piercing ";
    weaponAction[8] = " to cast an ice spell at ";
    weaponAction[9] = " to cast a poison spell at ";
    //cout << "sorcerer constructor " << endl;
};
