
#ifndef __headcount__test_Board__
#define __headcount__test_Board__

#include "../src/include/Board.h"
#include "gtest/gtest.h"


TEST( Board, checkCell ) {
    Board board;
    EXPECT_EQ(board.getCell(1), -1 );
    board.updateBoard(0, 1);
    EXPECT_EQ(board.getCell(1), 0 );
    board.updateBoard(1, 5);
    EXPECT_EQ(board.getCell(5), 1 );
    board.updateBoard(0, 33);
    EXPECT_EQ(board.getCell(33), -1 );
}

TEST( Board, checkCellOverwrite ) {
    Board board;
    board.updateBoard(0, 3);
    EXPECT_EQ(board.getCell(3), 0 );
    board.updateBoard(1, 3);
    EXPECT_EQ(board.getCell(3), 1 );
}

TEST( Board, checkFull ) {
    Board board;
    EXPECT_FALSE(board.isFull());
    board.updateBoard(1, 9);
    board.updateBoard(0, 1);
    board.updateBoard(1, 2);
    board.updateBoard(0, 3);
    board.updateBoard(1, 4);
    EXPECT_FALSE(board.isFull());
    board.updateBoard(0, 5);
    board.updateBoard(1, 6);
    board.updateBoard(0, 7);
    board.updateBoard(1, 8);
    EXPECT_TRUE(board.isFull());
}

TEST( Board, checkState ) { 
	Board board;
	EXPECT_EQ(board.getState(0), 0);
	EXPECT_EQ(board.getState(1), 0);
	board.updateBoard(0, 3);
	EXPECT_EQ(board.getState(0), 1 << 2);
	board.updateBoard(1, 5);
	EXPECT_EQ(board.getState(1), 1 << 4);
	board.updateBoard(0, 9);
	EXPECT_EQ(board.getState(0), (1 << 2) + (1 << 8));
}

#endif


