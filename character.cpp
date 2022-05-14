#include "Character.h"

/*
Character::Character(std::string name, int hp, int strength, int speed)
{
    this->name= name;
    this->hp= hp;
    this->strength= strength;
    this->speed= speed;
}
*/

//Character::Character(){Character("null",1,1,1);}

std::string Character::getName(){return this->name;}
int Character::getHp() { return this->hp; }
int Character::getStrength() { return this->strength; }
int Character::getSpeed() { return this->speed; }
int* Character::getHealthPtr() { return &this->hp; }

Character::~Character() {}
