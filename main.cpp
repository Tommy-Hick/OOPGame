#include <iostream>
#include <stdlib.h>
#include "Move.h"
#include "Player.h"
#include "Character.h"
#include "Game.h"
#include "Display.h"


int main()
{
    Game game;

    game.addCharacter(Character("Giant", 100, 40, 20));
    game.addCharacter(Character("Dwarf", 600, 10, 50));

    Player player1;
    Player* player1ptr = &player1;

    Player player2;
    Player* player2ptr = &player2;	

    game.updatePlayer(player1ptr, 0);
    game.updatePlayer(player2ptr, 1);

    Display display(game);

    display.menu();

    return 0;
}