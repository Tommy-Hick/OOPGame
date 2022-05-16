#include "Display.h"
#include "Game.h"
#include <stdlib.h>
#include <chrono>
#include <thread>

Display::Display(){}

Display::Display(Game game){this-> game = game;}

void Display::characterSelection(){

    std::cout<<"Select character for player one out of the list below: "<< "\n" << std::endl;
    std::cout << "Character list: " << std::endl;
    
    for (int i = 0; i < game.getNumCharacters(); i++)
    {

        std::cout<<i+1<<". "<<game.getCharacter(i).getName()<<std::endl;
        std::cout<<"\tHP: \t"<<game.getCharacter(i).getHP()<<std::endl;
        std::cout<<"\tSpeed: \t"<<game.getCharacter(i).getSpeed()<<std::endl;
        std::cout<<"\tStrength:\t \t"<<game.getCharacter(i).getStrength()<<std::endl;
        std::cout<< "\n"; 
    }

    int index = game.getInput(game.getNumCharacters())-1;
    game.getPlayer(0).applyCharacter(game.getCharacter(index));
    system("clear");

    std::cout<<"Player one has chosen "<< game.getCharacter(index).getName()<< "\n" << std::endl;
    
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    std::cout<<"Select character for player two: "<<std::endl;

    for (int i = 0; i < game.getNumCharacters(); i++)
    {
        std::cout<<i+1<<". "<<game.getCharacter(i).getName()<<std::endl;
        std::cout<<"\tHP: \t"<<game.getCharacter(i).getHP()<<std::endl;
        std::cout<<"\tSpeed: \t"<<game.getCharacter(i).getSpeed()<<std::endl;
        std::cout<<"\tStrength: \t"<<game.getCharacter(i).getStrength()<<std::endl;
        std::cout<< "\n"; 
    }
    
    index = game.getInput(game.getNumCharacters())-1;
    game.getPlayer(1).applyCharacter(game.getCharacter(index));
    std::cout<<"Player two has chosen "<< game.getCharacter(index).getName()<<std::endl;

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    system("clear");
    std::cout<<"Fight!\n"<<std::endl;
    fight();
    
}

void Display::menu(){
    system("clear");

    std::cout<<"Welcome to Mortal OOPbat! \n";

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    std::cout<<"Menu: \n"
            <<"1. Play\n"
            <<"2. Quit"<<std::endl;
    int input = game.getInput(2);
    switch (input)
    {
    case 1:
        system("clear");
        characterSelection();
        break;

    case 2:
        exit(0);
        break;

    default:
        break;
    }
}

void Display::fight(){

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    system("clear");

    std::cout<<"Choose move for player one: \n"
            <<"1. Attack\n"
            <<"2. Heal"<<std::endl;

    int p1MoveChoice = game.getInput(2);

    std::cout<<"Choose move for player two: \n"
            <<"1. Attack\n"
            <<"2. Heal"<<std::endl;

    int p2MoveChoice = game.getInput(2);

    game.executeTurn(p1MoveChoice, p2MoveChoice);

    // dislay fight results
}

void Display::HUD(){
    
}

Display::~Display()
{
}