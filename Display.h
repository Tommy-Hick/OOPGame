#ifndef DISPLAY_H
#define DISPLAY_H

#include <iostream>
#include <string>
#include "Game.h"
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
    void menu();
    void fight();
    void HUD();
    ~Display();
};

#endif