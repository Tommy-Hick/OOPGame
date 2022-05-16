#include "Player.h"

Player::Player(){}

void Player::setSpeed(int speed) { this->speed = speed; }
void Player::setStrength(int strength) { this->strength = strength; }
void Player::setHP(int hp) { this->hp = hp;}


void Player::applyCharacter(Character character)
{
    setSpeed(character.getSpeed());
    setStrength(character.getStrength());
    setHP(character.getHP());
    this->full_hp = character.getHP();
}

Player::~Player() {}