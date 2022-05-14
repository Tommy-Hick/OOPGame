#ifndef MOVE_H

#define MOVE_H

#include<iostream>
#include <string>

#include "Character.h"

class Move// : public Character
{
    private:

    public:
        virtual int returnAttack(Character player1, Character player2, int order) = 0;
        virtual int returnHeal() = 0;
        virtual int returnSpecial(int returnAttack()) = 0;

};

class GiantMoves : public Move
{
    public:
        int returnAttack(Character player1, Character player2, int order) 
        {
            if (order == 0)
            {
                *player2.getHealthPtr() - player1.getStrength();
            }
            else{

                *player1.getHealthPtr() - player2.getStrength();  
            }
        }
        void Heal(int getHealth());
};

class DwarfMoves : public Move
{
    public:
        void Heal(int get);
};

class ArcherMoves : public Move
{
    public:
        void Attack();
        void Heal();
        void Special();
};

#endif