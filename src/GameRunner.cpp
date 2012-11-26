#include "include/GameRunner.h"

GameRunner::GameRunner()
{
	game = NULL;
}

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
    game->startGame();

    int winnerIndex = -1;

    while(winnerIndex == -1)
    {
        game->makeTurn();
        winnerIndex = game->checkWin();

        game->nextPlayer();
    }

    game->endGame(winnerIndex);
}
