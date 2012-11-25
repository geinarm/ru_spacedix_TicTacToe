//
//  testCounter.h
//  headcount
//
//  Created by Guðjón Magnússon on 11/15/12.
//  Copyright (c) 2012 Guðjón Magnússon. All rights reserved.
//

#ifndef __headcount__testCounter__
#define __headcount__testCounter__

//#define CATCH_CONFIG_MAIN
#include "../src/include/counter.h"
#include "gtest/gtest.h"


TEST( counter, startsAtZero ) {
    counter* c = new counter;
    EXPECT_EQ( c->getCount(), 0 );
}

TEST( counter, addOne ) {
    counter* c = new counter;
    c->add();
    EXPECT_EQ( c->getCount(), 1 );
    c->add();
    EXPECT_EQ( c->getCount(), 2 );
    c->add();
    c->add();
    EXPECT_EQ( c->getCount(), 4 );
}

TEST( counter, addMore ) {
    counter* c = new counter;
    c->add(1);
    EXPECT_EQ( c->getCount(), 1 );
    c->add(100);
    EXPECT_EQ( c->getCount(), 101 );
    c->add(0);
    EXPECT_EQ( c->getCount(), 101 );
}

TEST( counter, addNegative ) {
    counter* c = new counter;
    c->add(-1);
    EXPECT_EQ( c->getCount(), 0 );
    c->add(-100);
    EXPECT_EQ( c->getCount(), 0 );
    c->add(-0);
    EXPECT_EQ( c->getCount(), 0 );
}

TEST( counter, subtractOne) {
    counter* c = new counter;
    c->add(100);
    c->subtract();
    EXPECT_EQ( c->getCount(), 99 );
    c->subtract();
    c->subtract();
    EXPECT_EQ( c->getCount(), 97 );
}

TEST( counter, subtractMore ) {
    counter* c = new counter;
    c->add(100);
    c->subtract(1);
    EXPECT_EQ( c->getCount(), 99 );
    c->subtract(9);
    EXPECT_EQ( c->getCount(), 90 );
    c->subtract(50);
    EXPECT_EQ( c->getCount(), 40 );
}

TEST( counter, subtractNegative) {
    counter* c = new counter;
    c->add(100);
    c->subtract(-1);
    EXPECT_EQ( c->getCount(), 100 );
    c->subtract(-9);
    EXPECT_EQ( c->getCount(), 100 );
    c->subtract(-50);
    EXPECT_EQ( c->getCount(), 100 );
}

TEST( counter, countBelowZero ) {
    counter* c = new counter;
    c->subtract();
    EXPECT_EQ( c->getCount(), 0 );
    c->subtract(9);
    EXPECT_EQ( c->getCount(), 0 );
    c->add(10);
    c->subtract(50);
    EXPECT_EQ( c->getCount(), 0 );
}

#endif /* defined(__headcount__testCounter__) */
