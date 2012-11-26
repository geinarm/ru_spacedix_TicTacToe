//
//  main.cpp
//  headcount
//
//  Created by Guðjón Magnússon on 11/2/12.
//  Copyright (c) 2012 Guðjón Magnússon. All rights reserved.
//

#include <iostream>
#include <cstring>
#include "include/counter.h"
#include "include/GameRunner.h"
#include "include/TicTacToe.h"

using namespace std;

int main(int argc, const char * argv[])
{
    GameRunner gameRunner;
    TicTacToe* game = new TicTacToe;

    gameRunner.setGame(game);
    gameRunner.run();

    return 0;
}


