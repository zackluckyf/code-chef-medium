//
//  main.cpp
//  marbles
//
//  Created by Zack Fanning on 9/29/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Rohit dreams he is in a shop with an infinite amount of marbles. He is allowed to select n marbles. There are marbles of k different colors. From each color there are also infinitely many marbles. Rohit wants to have at least one marble of each color, but still there are a lot of possibilities for his selection. In his effort to make a decision he wakes up. Now he asks you how many possibilities for his selection he would have had. Assume that marbles of equal color can't be distinguished, and the order of the marbles is irrelevant.
 */
// If we are selecting an r-combination from n elements with repetition, there are C(n+r−1,r)

//marbles kept less than 20

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
    unsigned long long int colors, marbles, sum1(1), sum2(1), sum3(1);
    std::cout << "How many marbles are there: ";
    std::cin >> marbles;
    std::cout << "How many colors are there: ";
    std::cin >> colors;
    if (colors > marbles)
    {
        std::cout << "There is no way to have at least one marble of each color\n";
    }
    else if (colors == marbles)
    {
        std::cout << "There is 1 way to select that\n";
    }
    else
    {
        for(unsigned long long int i = (marbles - 1); i > 0; i--)
        {
            sum1 *= i;
        }
            for(unsigned long long int j = (marbles - 1 - colors); j > 0; j--)
            {
                sum2 *= j;
            }
                for (unsigned long long int k = colors; k > 0; k--)
                {
                    sum3 *=k;
                }
        sum3 = sum2 * sum3;
        std::cout << "There are " << sum1/sum3 << " ways to select that\n";
    }
    
    
    return 0;
}
