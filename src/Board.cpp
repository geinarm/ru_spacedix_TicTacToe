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
	if (cell > 9 || cell < 1 || player < 0 || player > 1) 
		return;

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
	if (cell < 0 || cell > 9)
		return -1;

    if(boardLayout[cell]=='X'){
        return 0;
    }

    if(boardLayout[cell]=='O')
    {
        return 1;
    }
    
	return -1;
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
