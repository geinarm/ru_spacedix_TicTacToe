#ifndef __headcount__test_TicTacToe__
#define __headcount__test_TicTacToe__

#include "../src/include/TicTacToe.h"
#include "gtest/gtest.h"

TEST( TicTacToe, checkMove ) {
	TicTacToe game;
	game.addMove(0, 1);
	EXPECT_EQ(game.checkWin(), -1);
	game.addMove(0, 2); 
	EXPECT_EQ(game.checkWin(), -1);
	game.addMove(0, 3); 
	EXPECT_EQ(game.checkWin(), 0);
}

TEST( TicTacToe, checkFull ) {
        TicTacToe game2;
        game2.addMove(0, 1);
        game2.addMove(1, 2);
        game2.addMove(0, 3);
        game2.addMove(1, 4);
        game2.addMove(0, 5);
        game2.addMove(1, 6);
        game2.addMove(1, 7);
        game2.addMove(0, 8);
        game2.addMove(1, 9);
        EXPECT_EQ(game2.checkWin(), 3);
}

#endif
