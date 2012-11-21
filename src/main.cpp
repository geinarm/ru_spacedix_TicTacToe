//
//  main.cpp
//  headcount
//
//  Created by Guðjón Magnússon on 11/2/12.
//  Copyright (c) 2012 Guðjón Magnússon. All rights reserved.
//

#include <iostream>
#include "include/counter.h"

char input[64];

int main(int argc, const char * argv[])
{
    bool running = true;
    counter counter;

    std::cin.width(64);

    while(running)
    {
        std::cout << ": ";
        std::cin >> input;

        if (strcmp(input, "add") == 0)
        {
            counter.add(1);
            std::cout << "count: " << counter.getCount() << "\n";
        }
        else if(strcmp(input, "sub") == 0)
        {
            counter.subtract();
            std::cout << "count: " << counter.getCount() << "\n";
        }
        else if((strcmp(input, "reset") == 0))
        {
            counter.reset();
            std::cout << "count: " << counter.getCount() << "\n";
        }
        else if (strcmp(input, "exit") == 0)
        {
            running = false;
        }
        else
        {
            std::cout << "Invalid command" << "\n";
        }

    }
    std::cout << "Thanks for counting, see ya";

    return 0;
}


