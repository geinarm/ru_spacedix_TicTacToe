#ifndef GAME_CPP
#define GAME_CPP

#include "include/Game.h"
#include "include/Player.h"
using namespace std;

Game::Game()
{
	currentPlayer = 0;
	playerCount = 2;
	players = new Player[2];
}

Game::~Game()
{
    delete[] players;
}

void Game::startGame()
{}

void Game::makeTurn()
{}

int Game::checkWin()
{
    return -1;
}

void Game::nextPlayer()
{
    currentPlayer = ((currentPlayer +1) % playerCount);
}

void Game::endGame(int winner)
{
}

int Game::getCurrentPlayer(){
    return currentPlayer;
}
void Game::setCurrentPlayer(int index){
    currentPlayer = index;
}

int Game::getPlayerCount(){
    return playerCount;
}
void Game::setPlayerCount(int count){
    playerCount = count;
}

#endif
