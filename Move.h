#ifndef MOVE_H

#define MOVE_H

#include<iostream>
#include <string>
#include "Player.h"

class Move// : public Character
{
    private:

    public:
        virtual void attack(Player player1, Player player2, int order) = 0;
        virtual void heal(Player player) = 0;
        virtual void special(int returnAttack()) = 0;
<<<<<<< HEAD
=======

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
private:
    
public:
    virtual void DoMove() = 0;
    ~DoMove();
protected:
    std::string moveName;
    std::string moveDescription;
>>>>>>> d16df841b6055fb37b7ea236dca7f9dcf1a012de
};


class Attack: public Move
{
private:
    int AttackAmount;

public:
    void DoMove();   

};

class Heal: public Move
{
private:
    int HealAmount;

public:
    void DoMove();   

};
#endif