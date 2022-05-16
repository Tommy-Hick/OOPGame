#include "Player.h"

Player::Player(){}

void Player::setSpeed(int speed) { this->speed = speed; }
void Player::setStrength(int strength) { this->strength = strength; }
void Player::setFullHp(int fullHp) { this->full_hp = fullHp;}
void Player::setHp(int _hp) { this->hp = _hp; }


void Player::applyCharacter(Character character)
{
    setSpeed(character.getSpeed());
    setStrength(character.getStrength());
    setHp(character.getHp());
    set
}

Player::~Player()
{
}