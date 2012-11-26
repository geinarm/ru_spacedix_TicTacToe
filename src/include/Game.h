#ifndef GAME_H
#define GAME_H

#include "Player.h"

class Game
{
    public:
        Game();
        ~Game();
        virtual void startGame();
        virtual void makeTurn();
        virtual int checkWin();
        virtual void nextPlayer();
        virtual void endGame(int winner);
        virtual int getCurrentPlayer();
        virtual int getPlayerCount();
        void setCurrentPlayer(int index);
        void setPlayerCount(int count);
    protected:
        int currentPlayer;
		int playerCount;
		Player *players;
};

#endif // GAME_H
