//
//  counter.h
//  headcount
//
//  Created by Guðjón Magnússon on 11/2/12.
//  Copyright (c) 2012 Guðjón Magnússon. All rights reserved.
//

#ifndef __headcount__counter__
#define __headcount__counter__

#include <iostream>

class counter
{
    int count;
    
public:
    counter();
    void add();
    void add(int i);
    void subtract();
    void subtract(int i);
    int getCount();
    void reset();
};

#endif /* defined(__headcount__counter__) */
