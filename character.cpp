#include "Character.h"

Character::Character(std::string name, int hp, int strength, int speed)
{
    this->name= name;
    this->hp= hp;
    this->strength= strength;
    this->speed= speed;
}

Character::Character(){Character("null",1,1,1);}

std::string Character::getName(){return name;}
int Character::getHp() { return hp; }
int Character::getStrength() { return strength; }
int Character::getSpeed() { return speed; }

Character::~Character()
{
}
