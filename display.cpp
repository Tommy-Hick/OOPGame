#include "Display.h"
#include "Game.h"
#include <stdlib.h>

Display::Display(){

}

void Display::characterSelection(Game game){

    std::cout<<"Select character for player one: "<<std::endl;

    for (int i = 0; i < game.getNumCharacters(); i++)
    {

        std::cout<<i+1<<". "<<game.getCharacter(i).getName()<<std::endl;
        std::cout<<"HP: "<<game.getCharacter(i).getHp()<<std::endl;
        std::cout<<"Speed: "<<game.getCharacter(i).getSpeed()<<std::endl;
        std::cout<<"Strength: "<<game.getCharacter(i).getStrength()<<std::endl;
        std::cout<< "\n"; 
    }

    int index = game.getInput(game.getNumCharacters())-1;
    game.getPlayer(0).applyCharacter(game.getCharacter(index));
    
    std::cout<<"Player one has chosen "<< game.getCharacter(index).getName()<<std::endl;
    

    std::cout<<"Select character for player two: "<<std::endl;

    for (int i = 0; i < game.getNumCharacters(); i++)
    {
        std::cout<<i+1<<". "<<game.getCharacter(i).getName()<<std::endl;
    }
    index = game.getInput(game.getNumCharacters())-1;
    game.getPlayer(1).applyCharacter(game.getCharacter(index));
    std::cout<<"Player two has chosen "<< game.getCharacter(index).getName()<<std::endl;

    fight(game);
    
}

void Display::menu(Game game){
    std::cout<<"Menu: \n"
            <<"1. Play\n"
            <<"2. Quit"<<std::endl;
    int input = game.getInput(2);
    switch (input)
    {
    case 1:
        characterSelection(game);
        break;

    case 2:
        exit(0);
        break;

    default:
        break;
    }
}

void Display::fight(Game game){
    std::cout<<"Fight!"<<std::endl;

    std::cout<<"Choose move for player one: \n"
            <<"1. Attack\n"
            <<"2. Heal"<<std::endl;

    int input1 = game.getInput(2);

    std::cout<<"Choose move for player two: \n"
            <<"1. Attack\n"
            <<"2. Heal"<<std::endl;

    int input2 = game.getInput(2);
}

Display::~Display()
{
}