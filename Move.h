#ifndef MOVE_H

#define MOVE_H

#include <iostream>
#include <string>
#include "Player.h"

class Move // : public Character
{
private:
public:
    virtual void attack(Player player1, Player player2, int order);
    virtual void heal(Player player);
    virtual void special(int returnAttack());
};

#endif