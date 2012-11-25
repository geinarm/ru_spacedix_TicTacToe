#ifndef TICTACTOE_H
#define TICTACTOE_H

#include "Game.h"
#include "Board.h"


class TicTacToe : public Game
{
    public:
        TicTacToe();
        ~TicTacToe();
        void startGame();
        void makeTurn();
        int checkWin();
        void endGame();
    private:
        Board board;
};

#endif // TICTACTOE_H
