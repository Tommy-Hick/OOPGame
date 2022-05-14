#include <iostream>
#include <stdlib.h>
#include "Player.h"
#include "Character.h"
#include "Game.h"
#include "Display.h"


int main()
{
    Game game;
    Display display;

    game.addCharacter(Character("Giant", 100, 40, 20));
    game.addCharacter(Character("Dwarf", 40, 10, 50));

    //Player Josh("Josh", game.getCharacter(0));
    //Player James("James", game.getCharacter(1));

    //game.updatePlayer(Josh, 0);
    //game.updatePlayer(James, 1);

    //std::cout << Josh.getHp() << std::endl;

    display.menu(game);


    return 0;
}
