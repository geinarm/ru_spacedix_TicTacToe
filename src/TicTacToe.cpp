#include "include/TicTacToe.h"
#include <string>
#include <iostream>

using namespace std;

const int TicTacToe::winningStates[8] = {7, 56, 73, 84, 146, 273, 292, 448};

TicTacToe::TicTacToe()
{
}

TicTacToe::~TicTacToe()
{
    //dtor
}

void TicTacToe::startGame()
{
    //Taka inn tvo playera
    playerCount = 2;

    //Bý nýtt array af players og setjum það inn í game.h
    players = new Player[2];

    setCurrentPlayer(0);

    //Setjum alla players i leikinum inn í array'ið
    for(int i = 0; i < playerCount; i++)
    {
        Player newPlayer;
        cout << "Player" << i + 1 << " Please write your name:";

        //Upphafssetjum nafnid a player med nafni leikmanns
        string playerName;
        cin >> playerName;
        newPlayer.setName(playerName);
		cin.ignore(1024, '\n');

        //Setjum hann i arrayinn
        players[i] = newPlayer;
    }
}


void TicTacToe::makeTurn()
{
    Player currPlayer = players[getCurrentPlayer()];

    int marker;

    board.printBoard();

    cout << players[getCurrentPlayer()].getName() << endl;
    cout << "Where do you want to place your marker:";
    do
    {
        cin >> marker;
	 	cin.ignore(1024, '\n');

        cout << endl;
        if(board.getCell(marker)!=-1)
        {
            cout << "That cell is already occupied" << endl;
            cout << "Try Again" << endl;
            board.printBoard();
        }
		else if (marker < 0 || marker > 9)
		{
			cout << "Not a valid cell" << endl;
			board.printBoard();
		}

    }
    while(board.getCell(marker) != -1 || marker < 0 || marker > 9);

    addMove(getCurrentPlayer(),marker);
}

void TicTacToe::addMove(int player, int marker)
{
	board.updateBoard(player, marker);
}

int TicTacToe::checkWin()
{
    int playerState = board.getState(getCurrentPlayer());

    for(unsigned int i = 0; i < 8; i++)
    {
        if((winningStates[i] & playerState) == winningStates[i])
            return getCurrentPlayer();
    }

    if(board.isFull())
        return 3;
    else return -1;
}

void TicTacToe::endGame(int winner)
{
    cout << "Winner: " << players[winner].getName() << endl;
}
