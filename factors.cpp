//
//  main.cpp
//  factors
//
//  Created by Zack Fanning on 9/30/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Alice has learnt factorization recently. Bob doesn't think she has learnt it properly and hence
 he has decided to quiz her. Bob gives Alice a very large number and asks her to find out the number 
 of factors of that number. To make it a little easier for her, he represents the number as a 
 product of N numbers. Alice is frightened of big numbers and hence is asking you for help. Your 
 task is simple. Given N numbers, you need to tell the number of distinct factors of the product of 
 these N numbers.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>



int main(int argc, const char * argv[])
{
    typedef long long big;
    big total(1);
    int num, factors(0);
    std::cout << "How many integers are there(up to 10): ";
    std::cin >> num;
    std::vector<int> integers(num);
    std::cout << "What are the integers(positive non zero integers under 10^18 when multiplied): ";
    for (int i = 0; i < num; i++)
    {
        std::cin >> integers[i];
    }
    for (int i = 0; i < num; i++)
    {
         total *= integers[i];
    }
    double tempTotal = total;
    tempTotal = sqrt(tempTotal);
    for (int i = 1; i < tempTotal+2; i++)
    {
        if (total % i == 0)
        {
            factors += 1;
        }
    }
    factors *=2;
    std::cout << "There are " << factors << " factors of those integers!\n";
    return 0;
}

