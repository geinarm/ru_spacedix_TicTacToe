#ifndef GAME_H
#define GAME_H

#include "Player.h"

class Game
{
    public:
        Game();
        ~Game();
        void startGame();
        void makeTurn();
        int checkWin();
        void nextPlayer();
        void endGame();
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
