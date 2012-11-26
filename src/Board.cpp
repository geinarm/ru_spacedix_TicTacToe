#include "include/Board.h"
#include <iostream>
using namespace std;

Board::Board()
{
    states[0] = 0;
    states[1] = 0;

    for(int i = 0; i < 9; i ++) //sizeof(boardLayout)
    {
        boardLayout[i] = ' ';
    }
}

Board::~Board()
{
    //dtor
}

void Board::printBoard()
{
    int count = 1;

    for(int i = 0; i < 3; i++) //sqrt(sizeof(boardLayout))
    {
        cout << "|";

        for(int n = 0; n < 3; n++)
        {
            if( (boardLayout[count] == 'X') || (boardLayout[count]=='O'))
            {
                cout << boardLayout[count] ;
                cout << "|";
            }
            else
                cout << count << "|";
            count++;
        }

        cout << endl;
    }
}

void Board::updateBoard(int player, int cell)
{
    states[player] += 1 << (cell - 1);

    if(player == 0)
    {
        boardLayout[cell] = 'X';
    }
    else if(player == 1)
    {
        boardLayout[cell] = 'O';
    }
}

int Board::getCell(int cell)
{
    if(boardLayout[cell]=='X'){
        return 0;
    }
    else if(boardLayout[cell]=='O')
    {
        return 1;
    }
    else if(boardLayout[cell]==' ')
    {
        return -1;
    }
    else return -1;
}

bool Board::isFull()
{
    if( (states[0] + states[1]) == 511)
        return true;

    return false;
}

int Board::getState(int player)
{
    return states[player];
}
