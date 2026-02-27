#ifndef WARRIOR
#define WARRIOR
#include "character.h"

class Warrior : public Character
{
    private:

    public:
        Warrior(string name);
        int selectWeapon();

};

#endif
