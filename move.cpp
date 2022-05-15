#include "Move.h"

void Heal::executeMove(Player player)
{
    *player.getHealthPtr() + (1/4)*player.getHp();
}

void Attack::executeMove(Player player1, Player player2)
{
    *player2.getHealthPtr() - player1.getStrength();
}