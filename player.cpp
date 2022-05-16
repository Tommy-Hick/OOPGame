#include "Player.h"

Player::Player(){}

void Player::setSpeed(int speed) { this->speed = speed; }
void Player::setStrength(int strength) { this->strength = strength; }
void Player::setHp(int _hp) { this->hp = _hp; }


void Player::applyCharacter(Character character)
{
    setSpeed(character.getSpeed());
    setStrength(character.getStrength());
    setHP(character.getHp());
    this->full_hp = character.getHp();
}

Player::~Player() {}