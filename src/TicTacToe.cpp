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

    //B� n�tt array af players og setjum �a� inn � game.h
    players = new Player[2];
    //Player* newPlayers = new Player[2];
    //players = newPlayers;

    setCurrentPlayer(0);

    //Setjum alla players i leikinum inn � array'i�
    for(int i = 0; i < playerCount; i++)
    {
        Player newPlayer;
        cout << "Player" << i << " Please write your name:";

        //Upphafssetjum nafnid a player med nafni leikmanns
        string playerName;
        cin >> playerName;
        newPlayer.setName(playerName);

        //Setjum hann i arrayinn
        players[i] = newPlayer;
    }
}


void TicTacToe::makeTurn()
{
    Player currPlayer = players[getCurrentPlayer()];

    int marker;

    board.printBoard();

    //cout << "Player" << getCurrentPlayer()+1 << endl;
    cout << players[getCurrentPlayer()].getName() << endl;
    cout << "Where do you want to place your marker:";
    do
    {
        cin >> marker;
        cout << endl;
        if(board.getCell(marker)!=-1)
        {
            cout<< "That cell is already occupied" << endl;
            cout<< "Try Again";
            board.printBoard();
        }

    }
    while(board.getCell(marker)!=-1);

    board.updateBoard(getCurrentPlayer(),marker);

}

int TicTacToe::checkWin()
{
    int playerState = board.getState(getCurrentPlayer());

    for(unsigned int i=0; i < 8; i++)
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
