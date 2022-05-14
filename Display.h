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

public:
    Display();
    void characterSelection(Game game);
    void menu(Game game);
    void fight(Game game);
    ~Display();
};

#endif