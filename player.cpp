#include "Player.h"

Player::Player(){}

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