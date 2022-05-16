/*
    Parent class for Player object
*/

#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>

class Character
{
private:
protected:
    std::string name; //Name of character
    int full_hp; //Complete health points of character -- >Remains unchanged<
    int hp; //Health points that scales with player with each round of fighting
    int strength; //How much damage a player is able to deal to another character
    int speed; //Determines the speed of a player, where faster players attack first
public:
    Character(); //Default Constructor for
    Character(std::string name,int hp,int strength,int speed);
    std::string getName();
    
    int getHp();
    int getStrength();
    int getSpeed();
    int* getHealthPtr();

   ~Character();

};

#endif