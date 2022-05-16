#include "Move.h"

void Heal::executeMove(Player &player)
{
    player.setHp(player.getHp() + player.getFullHP()*(1/4)) ;

}
void Attack::executeMove(Player &player1, Player &player2)
{
    int attack_multiplier = 1;
    
    //*player2.getHealthPtr() - player1.getStrength() * attack_multiplier;
}
