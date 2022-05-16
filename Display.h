#ifndef DISPLAY_H
#define DISPLAY_H

#include <iostream>
#include <string>
#include "Game.h"
#include "Move.h"
#include "Character.h"
#include "Player.h"

class Display
{
private:
    Game game;
public:
    Display();
    Display(Game game);
    void characterSelection();
    void displayCharacterStats();
    bool displayCurrentStats(int p1MoveChoice, int p2MoveChoice);
    void menu();
    void fight();
    void displayPlayerMoves(int p1MoveChoice, int p2MoveChoice);
    void HUD();
    ~Display();
};

#endif