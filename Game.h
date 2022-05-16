#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
#include "Character.h"
#include "Move.h"

class Game
{
private:
    std::vector<Character> characterList;
    Player* currentPlayerPtrs[2];
    int choice;

public:
    Game();

    int getNumCharacters();
    Character getCharacter(int index);
    Player getPlayer(int index);
    int getInput(int range);

    void addCharacter(Character newCharacter);
    void updatePlayer(Player* playerPtr, int index);
    void executeTurn( int p1MoveChoice, int p2MoveChoice);

    ~Game();
};

void Game::executeTurn(int p1MoveChoice, int p2MoveChoice)
{
    if (currentPlayerPtrs[0]->getSpeed() > currentPlayerPtrs[1]->getSpeed())
    {
        if (p1MoveChoice = 1)
        {
            Attack attack;
            attack.executeMove(*currentPlayerPtrs[0], *currentPlayerPtrs[1]);
        }
        else
        {
            Heal heal;
            heal.executeMove(*currentPlayerPtrs[0], *currentPlayerPtrs[1]);
        }
        
    }
    else 
    {
        if (p2MoveChoice = 1)
        {
            Attack attack;
            attack.executeMove(*currentPlayerPtrs[1], *currentPlayerPtrs[0]);
        }
        else
        {
            Heal heal;
            heal.executeMove(*currentPlayerPtrs[1], *currentPlayerPtrs[0]);
        }
    }

}

#endif
