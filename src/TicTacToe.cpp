#include "include/TicTacToe.h"
#include <string>
#include <iostream>
using namespace std;

TicTacToe::TicTacToe()
{
    //ctor
}

TicTacToe::~TicTacToe()
{
    //dtor
}

void TicTacToe::startGame()
{
    //Taka inn tvo playera
    playerCount = 2;

    winningStates  = {7, 56, 73, 84, 146, 273, 292,448};

    //Bý nýtt array af players og setjum það inn í game.h
    players = new Player[2];
    //Player* newPlayers = new Player[2];
    //players = newPlayers;

    setCurrentPlayer(0);

    //Setjum alla players i leikinum inn í array'ið
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

    cout << "Player" << getCurrentPlayer()+1 << endl;
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
    int playerState;
    playerState = board.getState(getCurrentPlayer());

    for(int i = 0; i < sizeof(winningStates); i++)
    {
        cout << "Win"<< winningStates[i] << endl;
        cout << "player" << playerState << endl;

        if((winningStates[i] && playerState) == winningStates[i])
            return getCurrentPlayer();
    }

    if(board.isFull())
        return 3;
    else return -1;
}

void TicTacToe::endGame(int winner)
{
    cout << winner;
}
