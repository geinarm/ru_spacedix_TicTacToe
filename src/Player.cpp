#include "include/Player.h"

Player::Player()
{
    //ctor
}

Player::~Player()
{
    //dtor
}


void Player::setName(string playerName)
{
    name = playerName;
}
string Player::getName()
{
    return name;
}

void Player::setId(string playerId)
{
    id = playerId;
}

void Player::addScore(int s)
{
    score += s;
}
void Player::addScore()
{
    addScore(1);
}

int Player::getScore()
{
    return score;
}
