
#ifndef __headcount__test_Game__
#define __headcount__test_Game__

#include "../src/include/Game.h"
#include "gtest/gtest.h"


TEST( Game, playerCount ) {
    Game game;
    EXPECT_EQ(game.getPlayerCount(), 2 );
    game.setPlayerCount(4);
    EXPECT_EQ(game.getPlayerCount(), 4 );
}

TEST( Game, checkCurrentPlayer ) {
    Game game;
    EXPECT_EQ(game.getCurrentPlayer(), 0 );
    game.nextPlayer();
    EXPECT_EQ(game.getCurrentPlayer(), 1 );
    game.nextPlayer();
    EXPECT_EQ(game.getCurrentPlayer(), 0 );
	game.nextPlayer();
	EXPECT_EQ(game.getCurrentPlayer(), 1);
}


#endif
