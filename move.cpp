#include "Move.h"

void Heal::executeMove(Player &player)
{
    int playerNewHP = player.getHp() + player.getFullHP()*(1/4);
    player.setHp(playerNewHP);
}

void Attack::executeMove(Player &attackingPlayer, Player &victim)
{
    int attackMultiplier = 1;
    int victimNewHP = victim.getHp() - attackingPlayer.getStrength()*attackMultiplier;
    
    victim.setHp(victimNewHP);
    
    //*player2.getHealthPtr() - player1.getStrength() * attack_multiplier;
}
