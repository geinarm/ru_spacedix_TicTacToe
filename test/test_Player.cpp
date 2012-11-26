
#ifndef __headcount__test_Player__
#define __headcount__test_Player__

#include "../src/include/Player.h"
#include "gtest/gtest.h"


TEST( Player, checkScore ) {
    Player score;
    EXPECT_EQ(getScore(), 0 );
    addScore();
    EXPECT_EQ(getScore(), 1 );
}

#endif

