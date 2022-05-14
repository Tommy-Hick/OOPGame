#ifndef ATTACK_H
#define ATTACK_H

#include "Move.h"
#include "Character.h"
#include <iostream>
#include <string>

class Attack: public Move
{
private:
    int damage;
public:
    Attack();
    Attack(std::string name, std::string description, int strength);
    int getDamage();
    ~Attack();
};

#endif