#include "Move.h"

void Heal::executeMove(Player &player1, Player &player2)
{
    int playerNewHP = player1.getHP() + player1.getFullHP()*(1/4);

    if ( playerNewHP > player1.getFullHP())
    {
        playerNewHP = player1.getFullHP();
    }

    player1.setHP(playerNewHP);
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
