
#ifndef __headcount__test_Game__
#define __headcount__test_Game__

#include "../src/include/Game.h"
#include "gtest/gtest.h"


TEST( Game, playerCount ) {
    Game game;
    EXPECT_EQ(game.getPlayerCount, 0 );
    setPlayerCount(2);
    EXPECT_EQ(game.getPlayerCount, 2 );
}

TEST( Game, checkCurrentPlayer ) {
    Game game;
    setPlayerCount(2);
    EXPECT_EQ(getCurrentPlayer, 0 );
    setCurrentPlayer(1);
    EXPECT_EQ(getCurrentPlayer, 1 );
    nextPlayer();
    EXPECT_EQ(getCurrentPlayer, 0 );
}


#endif
