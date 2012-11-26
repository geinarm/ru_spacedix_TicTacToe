#include "include/Game.h"

Game::Game()
{
    //ctor
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
