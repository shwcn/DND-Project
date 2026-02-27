#include "warrior.h"
#include <iostream>
using namespace std;
// When Wizard constructor is called, instantiate the Character
// constructor and pass the name from the Wizard constuctor into it
Warrior::Warrior(string name) :Character(name)
{
   attackStrength= 17;
   endurance = 9;
   remainingHealth = endurance;
    // Assign the values for the weapon and weapon action arrays
    weapons[0] = "glaive";
    weapons[1] = "rapier";
    weapons[2] = "greatsword";
    weapons[3] = "longsword";
    weapons[4] = "flail";
    weapons[5] = "shortsword";
    weapons[6] = "quarterstaffs";
    weapons[7] = "light crossbow";
    weapons[8] = "spear";
    weapons[9] = "sickle";

    weaponAction[0] = " to swing at ";
    weaponAction[1] = " to thrust at ";
    weaponAction[2] = " and lunges at ";
    weaponAction[3] = " and lunges at ";
    weaponAction[4] = " to swing at ";
    weaponAction[5] = " bludgeoning ";
    weaponAction[6] = " bludgeoning ";
    weaponAction[7] = " piercing ";
    weaponAction[8] = " piercing ";
    weaponAction[9] = " slashing ";
    //cout << "Warrior constructor " << endl;
};
