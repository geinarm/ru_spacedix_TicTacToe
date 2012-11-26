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
	void addMove(int player, int marker);
    private:
        Board board;
        static const int winningStates[8];
};

#endif // TICTACTOE_H
