#ifndef PLAYER_CPP
#define PLAYER_CPP

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
    score++;
}

int Player::getScore()
{
    return score;
}

#endif
