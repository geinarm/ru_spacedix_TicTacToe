//
//  counter.cpp
//  headcount
//
//  Created by Guðjón Magnússon on 11/2/12.
//  Copyright (c) 2012 Guðjón Magnússon. All rights reserved.
//

#include "include/counter.h"
#include <cstring>
#include "include/Game.h"
#include "include/Player.h"
using namespace std;

counter::counter() : Game()
{
    count = 0;
}

void counter::add()
{
    count += 1;
}

void counter::add(int i)
{
    if(i > 0)
        count += i;
}

void counter::subtract()
{
    count --;

    if(count < 0)
        count = 0;
}

void counter::subtract(int i)
{
    if(i > 0){
        count -= i;
        if(count < 0)
            count = 0;
    }
}

int counter::getCount()
{
    return count;
}

void counter::reset()
{
    count = 0;
}

void counter::startGame()
{

    cout << "Starting game\n";

    setPlayerCount(2);
    setCurrentPlayer(0);
    players = new Player[2];

    Player player1;
    player1.setName("TheDude");

    Player player2;
    player2.setName("TheMan");

    players[0] = player1;
    players[1] = player2;
}

void counter::makeTurn()
{
    char input[64];
    std::cout << players[getCurrentPlayer()].getName() << " : ";
    std::cin >> input;

    if (strcmp(input, "add") == 0)
    {
        add(1);
        std::cout << "count: " << getCount() << "\n";
    }
    else if(strcmp(input, "sub") == 0)
    {
        subtract();
        std::cout << "count: " << getCount() << "\n";
    }
    else if((strcmp(input, "reset") == 0))
    {
        reset();
        std::cout << "count: " << getCount() << "\n";
    }
    else if (strcmp(input, "exit") == 0)
    {
        endGame();
    }
    else
    {
        std::cout << "Invalid command" << "\n";
    }
}

int counter::checkWin()
{
    if(count >= 10)
        return getCurrentPlayer();
    else
        return -1;
}

void counter::endGame()
{
    std::cout << "Thanks for counting, see ya\n";
}
