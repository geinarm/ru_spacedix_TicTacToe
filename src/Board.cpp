#include "Board.h"

Board::Board()
{
    //ctor
}

Board::~Board()
{
    //dtor
}

Board::Board(int boardSize)
{
    BOARDSIZE = boardSize;
}

void Board::initialize()
{
    for(int i = 0;i< BOARDSIZE; i++)
    {
        board[i] = ' ';
    }
}

