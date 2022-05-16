#include "Move.h"

void Heal::executeMove(Player &player)
{
    int playerNewHP = player.getHp() + player.getFullHP()*(1/4);

    if ( playerNewHP > player.getFullHP())
    {
        playerNewHP = player.getFullHP();
    }

    player.setHp(playerNewHP);
}

void Attack::executeMove(Player &attackingPlayer, Player &victim)
{
    int attackMultiplier = 1;
    int victimNewHP = victim.getHp() - attackingPlayer.getStrength()*attackMultiplier;

    if (victimNewHP < 0)
    {
        victimNewHP = 0;
    }
    
    
    victim.setHp(victimNewHP);   
}
