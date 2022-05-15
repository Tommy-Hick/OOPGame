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
   // Player(std::string name): Character(){} ; //why the fuck is this in the constructor? player is constructed via a player??

    void setStrength(int strength);
    void setSpeed(int speed);
    void setHp(int hp);
    void applyCharacter();

    ~Player();
};

#endif