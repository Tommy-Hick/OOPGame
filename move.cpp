#include "Move.h"
#include <chrono>
#include <thread>

void Heal::executeMove(Player &player1, Player &player2)
{
    int playerNewHP = player1.getHP() + (player1.getFullHP()/4);

    if ( playerNewHP > player1.getFullHP())
    {
        playerNewHP = player1.getFullHP();
    }

    std::cout<< player1.getName() << "healed " << player1.getFullHP()/4 << " HP!\n";

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

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

    std::cout << attackingPlayer.getName() << " dealt " << attackingPlayer.getStrength()*attackMultiplier << " damage to " << victim.getName() << "!\n";  
    
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    victim.setHP(victimNewHP);   
}
