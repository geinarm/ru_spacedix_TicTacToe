#include "TicTacToe.h"
#include "TicTacToePlayer.h"
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
    x = 0;
    o = 0;
    //Taka inn tvo playera
    playerCount = 2;

    //B� n�tt array af players og setjum �a� inn � game.h
    Player* newPlayers = new Player[2];
    players = newPlayers;


    //Setjum alla players i leikinum inn � array'i�
    for(int i = 0; i < playerCount; i++)
    {
        Player newPlayer;

        newPlayer.setId("player" + i);
        cout << "Player" << i << " Please write your name:";

        //Upphafssetjum nafnid a player med nafni leikmanns
        string playerName;
        cin >> playerName;
        newPlayer.setName(playerName);

        //Setjum hann i arrayinn
        players[i] = newPlayer;
    }


}


void makeTurn()
{

}

bool checkWin()
{

}
void endGame();
