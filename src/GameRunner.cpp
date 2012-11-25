#include "include/GameRunner.h"

GameRunner::GameRunner()
{}

GameRunner::GameRunner(Game* g)
{
    game = g;
}

GameRunner::~GameRunner()
{
    delete game;
}

void GameRunner::setGame(Game* g)
{
    game = g;
}

void GameRunner::run()
{
    std::cout << "run game\n";
    game->startGame();

    int winnerIndex = -1;
    while(winnerIndex == -1){
        game->makeTurn();
        winnerIndex = game->checkWin();

        game->nextPlayer();
    }

    game->endGame();
}
