
#ifndef __headcount__test_Game__
#define __headcount__test_Game__

#include "../src/include/Game.h"
#include "gtest/gtest.h"


TEST( Game, playerCount ) {
    Game game;
    EXPECT_EQ(game.getPlayerCount(), 0 );
    game.setPlayerCount(2);
    EXPECT_EQ(game.getPlayerCount(), 2 );
}

TEST( Game, checkCurrentPlayer ) {
    Game game;
    game.setPlayerCount(2);
    EXPECT_EQ(game.getCurrentPlayer(), 0 );
    game.setCurrentPlayer(1);
    EXPECT_EQ(game.getCurrentPlayer(), 1 );
    game.nextPlayer();
    EXPECT_EQ(game.getCurrentPlayer(), 0 );
}


#endif
