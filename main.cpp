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

    //Character giant("Giant", 100, 40, 20);
    //Character dwarf("Dwarf", 40, 10, 50);

    //add characters to character selection
    game.addCharacter(Character("Giant", 100, 40, 20));
    game.addCharacter(Character("Dwarf", 40, 10, 50));

    //Player Josh("Josh", game.getCharacter(0));
    //Player James("James", game.getCharacter(1));

    //game.updatePlayer(Josh, 0);
    //game.updatePlayer(James, 1);

    //std::cout << Josh.getHp() << std::endl;
<<<<<<< HEAD

    display.menu(game);
>>>>>>> function working

    return 0;
