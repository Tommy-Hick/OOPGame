#include "Game.h"
#include <typeinfo>
#include <iostream>
#include <cassert>

Game::Game() { choice = 0; }

void Game::addCharacter(Character newCharacter)
{
    characterList.push_back(newCharacter);
}

void Game::updatePlayer(Player *playerPtr, int index)
{
    currentPlayerPtrs[index] = playerPtr;
}

int Game::getNumCharacters() { return characterList.size(); }

Character Game::getCharacter(int index) { return characterList[index]; }

Player Game::getPlayer(int index) { return *currentPlayerPtrs[index]; }

int Game::getInput(int range)
{
    bool invalidChoice = true;
    std::cout << "Enter: ";
    while (invalidChoice)
    {
        choice = 0;
        std::cin >> choice;
        if (choice > 0 && choice <= range )
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

void Game::executeTurn(int p1MoveChoice, int p2MoveChoice)
{
    Attack attack;
    Heal heal;
    if (currentPlayerPtrs[0]->getSpeed() > currentPlayerPtrs[1]->getSpeed())
    {
        if (p1MoveChoice == 1)
        {
            attack.executeMove(*currentPlayerPtrs[0], *currentPlayerPtrs[1]);
        }
        else
        {
            heal.executeMove(*currentPlayerPtrs[0], *currentPlayerPtrs[1]);
        }
    }
    else
    {
        if (p2MoveChoice == 1)
        {
            attack.executeMove(*currentPlayerPtrs[1], *currentPlayerPtrs[0]);
        }
        else
        {
            heal.executeMove(*currentPlayerPtrs[1], *currentPlayerPtrs[0]);
        }
    }
}

Game::~Game() {}
