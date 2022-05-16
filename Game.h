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
    std::vector<Character> characterList; //List of characters
    Player* currentPlayerPtrs[2]; //stores location of player object
    int choice; //stores current 

public:
    Game(); //Default game constructor

    int getNumCharacters(); //Get the number of characters
    Character getCharacter(int index); //Get the character
    Player* getPlayer(int index);
    int getInput(int range);

    void addCharacter(Character newCharacter);
    void updatePlayer(Player* playerPtr, int index);
    void executeTurn( int p1MoveChoice, int p2MoveChoice);

    ~Game();
};

#endif
