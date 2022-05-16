#ifndef MOVE_H

#define MOVE_H

#include <iostream>
#include <string>
#include "Player.h"

class Move
{
private:
public:
    virtual void executeMove() = 0;
};

class Attack : public Move
{
private:
public:
    void executeMove(Player player1, Player player2);
};

void Attack::executeMove(Player player1, Player player2)
{
    int attack_multiplier = 1;
    *player2.getHealthPtr() - player1.getStrength()*attack_multiplier;
}


class Heal : public Move
{
private:
public:
    void executeMove(Player player);
};

#endif