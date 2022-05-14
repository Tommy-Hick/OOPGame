#include "Attack.h"

Attack::Attack(std::string name, std::string description, int strength)
{
    moveName = name;
    moveDescription = description;
    damage = strength;
}

Attack::Attack() : {Attack("null", "null", 1);}

int Attack::getDamage(){return damage;}

Attack::~Attack()
{
}