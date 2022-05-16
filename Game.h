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


#endif
