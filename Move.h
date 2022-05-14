#ifndef MOVE_H
#define MOVE_H

#include <iostream>
#include <string>

class Move
{
private:
    
public:
    virtual void DoMove() = 0;
    ~DoMove();
protected:
    std::string moveName;
    std::string moveDescription;
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