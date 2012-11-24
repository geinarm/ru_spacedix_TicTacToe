#ifndef TICTACTOE_H
#define TICTACTOE_H

#include "Game.h"


class TicTacToe : public Game
{
    public:
        void startGame();
        int x,o;
        TicTacToe();
        virtual ~TicTacToe();
    protected:
    private:
};

#endif // TICTACTOE_H
