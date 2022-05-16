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

    Player player1;
    Player palyer2;

    player1ptr = *P
    Player player2;

    game.updatePlayer(player1, 0);
    game.updatePlayer(player2, 1);

    display.menu(game);

    


    return 0;
}