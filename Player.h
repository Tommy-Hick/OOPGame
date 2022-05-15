#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"
#include <iostream>
#include <string>


class Player : public Character
{
private:

public:
    Player();

    void setStrength(int strength);
    void setSpeed(int speed);
    void setHp(int hp);
    void applyCharacter(Character character);

    ~Player();
};

#endif