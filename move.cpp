#include "Move.h"

void Move::attack(Player player1, Player player2, int order) 
        {
            if (order == 0)
            {
                *player2.getHealthPtr() - player1.getStrength();
            }
            else{

                *player1.getHealthPtr() - player2.getStrength();  
            }
        }
        
void Move::heal(Player player)
{
    *player.getHealthPtr() + (1/4)*player.getHp();
};