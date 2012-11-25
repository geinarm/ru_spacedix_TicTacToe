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
        virtual void nextPlayer();
        virtual void endGame();
        int getCurrentPlayer();
        int getPlayerCount();
    protected:
        void setCurrentPlayer(int index);
        void setPlayerCount(int count);
        int currentPlayer;
		int playerCount;
		Player *players;
};

#endif // GAME_H
