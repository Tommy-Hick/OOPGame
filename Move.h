#ifndef MOVE_H

#define MOVE_H

#include<iostream>
#include <string>

#include "Character.h"

class Move// : public Character
{
    private:

    public:
        virtual void attack(Character player1, Character player2, int order) = 0;
        virtual void heal() = 0;
        virtual void special(int returnAttack()) = 0;

};

class GiantMoves : public Move
{
    public:
        void attack(Character player1, Character player2, int order) 
        {
            if (order == 0)
            {
                *player2.getHealthPtr() - player1.getStrength();
            }
            else{

                *player1.getHealthPtr() - player2.getStrength();  
            }
        }
        void heal(int getHealth());
};

class DwarfMoves : public Move
{
    public:
        void heal(int get);
};

class ArcherMoves : public Move
{
    public:
        void attack();
        void heal();
        void special();
};

#endif