#ifndef GAMERUNNER_H
#define GAMERUNNER_H

#include <iostream>
#include "Game.h"

class GameRunner
{
    public:
        GameRunner();
        GameRunner(Game &g);
        ~GameRunner();
        void setGame(Game &g);
        void run();
    private:
        Game* game;
};

#endif // GAMERUNNER_H
