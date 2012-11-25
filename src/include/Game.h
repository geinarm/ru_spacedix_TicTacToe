#ifndef GAME_H
#define GAME_H
#include "Player.h"

class Game
{
    public:
        Game();
        virtual ~Game();
        virtual void startGame();
        virtual void makeTurn();
        virtual int checkWin();
        virtual void endGame();
    private:
		int playerCount;
		Player *players;
};

#endif // GAME_H
