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
        void endGame(int winner);
    private:
        Board board;
        int winningStates[8];
};

#endif // TICTACTOE_H
