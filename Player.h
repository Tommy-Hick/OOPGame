#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"
#include "Game.h"
#include <iostream>
#include <string>


class Player : public Character
{
private:

public:
    Player();
    Player(std::string name, Character character);

    void setStrength(int strength);
    void setSpeed(int speed);
    void setHp(int hp);
    void applyCharacter(Character character);

    ~Player();
};

#endif