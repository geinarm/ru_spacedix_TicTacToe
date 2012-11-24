#ifndef GAME_H
#define GAME_H
#include "Player.h"

class Game
{

    public:
        bool winCondition;
        int playerCount;
        Player* players;

        Game();
        virtual ~Game();
        virtual void startGame();
        virtual void makeTurn();
        virtual bool checkWin();
        virtual void endGame();
    protected:
    private:

};

#endif // GAME_H
