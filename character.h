#ifndef CHARACTER
#define CHARACTER

#include <string>
using namespace std;
const int MAXNUMOFWEAPONS = 10;

class Character
{
    protected:
        string charName;
        int attackStrength;
        int attackPower;
        int endurance ;
        int remainingHealth ;
        string weapons[MAXNUMOFWEAPONS];
        string weaponAction[MAXNUMOFWEAPONS];

    public:
        Character(string name = "");
        void setName(string name);
        string getName();
        int attack(int weaponID, Character*);
        int hitByOpponent(int hit);
        int selectWeapon();
        int getHitPoints();

};

#endif
