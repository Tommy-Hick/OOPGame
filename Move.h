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

class Heal : public Move
{
private:
public:
    void executeMove(Player player);
};

void Heal::executeMove(Player player)
{
    *player.getHealthPtr() - 
}

#endif