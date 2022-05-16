#include "Move.h"

void Heal::executeMove(Player &player)
{
    int playerNewHP = player.getHP() + player.getFullHP()*(1/4);

    if ( playerNewHP > player.getFullHP())
    {
        playerNewHP = player.getFullHP();
    }

    player.setHP(playerNewHP);
}

void Attack::executeMove(Player &attackingPlayer, Player &victim)
{
    int attackMultiplier = 1;
    int victimNewHP = victim.getHP() - attackingPlayer.getStrength()*attackMultiplier;

    if (victimNewHP < 0)
    {
        victimNewHP = 0;
    }
    
    
    victim.setHP(victimNewHP);   
}
