#include "include/Player.h"

Player::Player()
{
 	name = "";
}

void Player::setName(string playerName)
{
    name = playerName;
}
string Player::getName()
{
    return name;
}

void Player::addScore()
{
    addScore(1);
}

int Player::getScore()
{
    return score;
}
