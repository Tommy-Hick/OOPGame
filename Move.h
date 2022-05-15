#ifndef MOVE_H

#define MOVE_H

#include<iostream>
#include <string>
#include "Player.h"

class Move// : public Character
{
    private:

    public:
        virtual void attack(Player player1, Player player2, int order) = 0;
        virtual void heal(Player player) = 0;
        virtual void special(int returnAttack()) = 0;
};

#endif