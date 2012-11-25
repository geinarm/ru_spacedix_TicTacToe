#ifndef TICTACTOE_H
#define TICTACTOE_H

#include "Game.h"


class TicTacToe : public Game
{
    public:
        void startGame();
        TicTacToe();
        virtual ~TicTacToe();
    private:
	 	int x, o;	
		int *winConds;
};

#endif // TICTACTOE_H
