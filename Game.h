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
    void executeTurn( int input1, int input2);

    ~Game();
};

void Game::executeTurn(int input1, int input2)
{
    if (currentPlayerPtrs[0]->getSpeed() > currentPlayerPtrs[1]->getSpeed())
    {
        if (input1 = 1)
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


}

#endif
