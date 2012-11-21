//
//  counter.cpp
//  headcount
//
//  Created by Guðjón Magnússon on 11/2/12.
//  Copyright (c) 2012 Guðjón Magnússon. All rights reserved.
//

#include "include/counter.h"

counter::counter()
{
    count = 0;
}

void counter::add()
{
    count += 1;
}

void counter::add(int i)
{
    if(i > 0)
        count += i;
}

void counter::subtract()
{
    count --;

    if(count < 0)
        count = 0;
}

void counter::subtract(int i)
{
    if(i > 0){
        count -= i;
        if(count < 0)
            count = 0;
    }
}

int counter::getCount()
{
    return count;
}

void counter::reset()
{
    count = 0;
}
