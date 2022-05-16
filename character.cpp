#include "Character.h"


Character::Character(std::string name, int full_hp, int strength, int speed)
{
    this->name= name;
    this->hp= full_hp;
    this->full_hp = full_hp;
    this->strength= strength;
    this->speed= speed;
}

Character::Character(){Character("null",1,1,1);}

std::string Character::getName(){return this->name;}
int Character::getHp() { return this->hp; }
int Character::getStrength() { return this->strength; }
int Character::getSpeed() { return this->speed; }
int Character::getFullHP(){return this->full_hp; }

Character::~Character() {}
