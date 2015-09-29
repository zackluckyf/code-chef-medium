//
//  main.cpp
//  prime-generator
//
//  Created by Zack Fanning on 9/29/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

//  Shridhar wants to generate some prime numbers for his cryptosystem. Help him! Your task is to generate all prime numbers between two given numbers.


#include <iostream>
#include <vector>

int main(int argc, const char * argv[])
{
    bool truth;
    std::vector<int> primes;
    int min, max;
    // ask user for two inputs
    std::cout << "What is the minimum and maximum numbers for a range to be checked for primes: ";
    std::cin >> min >> max;
    for (int i = min; i < (max + 1); i++)
    {
        truth = true;
        if (i%2 == 0)
        {
            truth = false;
        }
        else
        {
            for(int j = 2; j < (min+1)/2; j++)
            {
                if(i % j == 0)
                {
                    truth = false;
                }
            }
        }
        if (truth == true)
        {
            primes.push_back(i);
        }
    }
    for (int i = 0; i < primes.size(); i++)
    {
        std::cout << primes[i] << "\n";
    }
    
    
    return 0;
}
