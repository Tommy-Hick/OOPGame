#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"
#include <iostream>
#include <string>


class Player : public Character
{
private:

public:
    Player(); //Default player constructor

    void setStrength(int strength); //initialises the value of strength
    void setSpeed(int speed); //initialises the value of speed
    void setHP(int hp); //initialises the value of strength

    void applyCharacter(Character character); //initialises a player object by taking in a character type

    ~Player();
};

#endif