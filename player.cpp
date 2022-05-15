#include "Player.h"

Player::Player(std::string name, Character character)
{
    this->name = name;
    applyCharacter(character);
}

Player::Player() : Character(std::string name,int hp,int strength,int speed){}


Player::Player() {name = "default";}

void Player::setSpeed(int speed) { this->speed = speed; }
void Player::setStrength(int strength) { this->strength = strength; }
void Player::setHp(int hp) { this->hp = hp; }


void Player::applyCharacter(Character character)
{
    setSpeed(character.getSpeed());
    setStrength(character.getStrength());
    setHp(character.getHp());
}

Player::~Player()
{
}