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
<<<<<<< HEAD
#include "include/TicTacToe.h"
=======
using namespace std;
>>>>>>> origin/master

int main(int argc, const char * argv[])
{
    GameRunner gameRunner;
<<<<<<< HEAD
    TicTacToe* game = new TicTacToe;
=======
    counter* game = new counter();
>>>>>>> origin/master

    gameRunner.setGame(game);
    gameRunner.run();

    cout << "hello world";
    return 0;
}


