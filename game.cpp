#include "Game.h"
#include <iostream>
#include <cassert>

Game::Game() { choice = 0; }

void Game::addCharacter(Character newCharacter)
{
    characterList.push_back(newCharacter);
}

void Game::updatePlayer(Player* player, int index)
{
    currentPlayers[index] = player;
}

int Game::getNumCharacters() { return characterList.size(); }

Character Game::getCharacter(int index) { return characterList[index]; }

Player Game::getPlayerPtr(int index) { return currentPlayers[index]; }

int Game::getInput(int range)
{
    bool invalidChoice = true;
    std::cout<<"Enter: ";
    while (invalidChoice)
    {
        choice = 0;
        std::cin >> choice;
        if (choice > 0 && choice <= range)
        {
            invalidChoice = false;
        }
        else
        {
            std::cout << "Invalid Input" << std::endl;
        }
    }
    return choice;
}

Game::~Game() {}
