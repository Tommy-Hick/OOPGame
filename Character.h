#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>

class Character
{
private:
protected:
    std::string name;
    int hp;
    int strength;
    int speed;
public:
    Character();
    Character(std::string name,int hp,int strength,int speed);
    std::string getName();
    int getHp();
    int getStrength();
    int getSpeed();
    int* getHealthPtr();

    virtual void setStrength()=0;
    virtual void setHealth()=0;
    virtual void setSpeed()=0;

    ~Character();

};

#endif