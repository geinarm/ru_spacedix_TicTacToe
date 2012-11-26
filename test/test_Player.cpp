
#ifndef __headcount__test_Player__
#define __headcount__test_Player__

#include "../src/include/Player.h"
#include "gtest/gtest.h"


TEST( Player, checkScore ) {
    Player player;
    EXPECT_EQ(player.getScore(), 0 );
    player.addScore();
    EXPECT_EQ(player.getScore(), 1 );
}

#endif

