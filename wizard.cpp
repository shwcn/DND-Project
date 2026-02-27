#include "wizard.h"
#include <iostream>
using namespace std;
// When Wizard constructor is called, instantiate the Character
// constructor and pass the name from the Wizard constuctor into it
Wizard::Wizard(string name) :Character(name)
{
   attackStrength = 8;
   endurance = 17;
   remainingHealth = endurance;
    // Assign the values for the weapon and weapon action arrays
    weapons[0] = "wand";
    weapons[1] = "amulet";
    weapons[2] = "poison";
    weapons[3] = "dagger";
    weapons[4] = "dart";
    weapons[5] = "sling";
    weapons[6] = "quarterstaffs";
    weapons[7] = "light crossbow";
    weapons[8] = "spear";
    weapons[9] = "sickle";

    weaponAction[0] = " to shoot fire at ";
    weaponAction[1] = " to electrocute ";
    weaponAction[2] = " on ";
    weaponAction[3] = " piercing ";
    weaponAction[4] = " piercing ";
    weaponAction[5] = " bludgeoning ";
    weaponAction[6] = " bludgeoning ";
    weaponAction[7] = " piercing ";
    weaponAction[8] = " piercing ";
    weaponAction[9] = " slashing ";
    //cout << "Wizard constructor " << endl;
};
