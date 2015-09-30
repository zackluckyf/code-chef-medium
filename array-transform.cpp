//
//  main.cpp
//  array-transform
//
//  Created by Zack Fanning on 9/30/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//


/*  
 Given n numbers, you can perform the following operation any number of times : Choose any subset of
 the numbers (possibly empty), none of which are 0. Decrement the numbers in the subset by 1, and 
 increment the numbers not in the subset by K. Is it possible to perform operations such that 
 exactly n - 1 numbers become 0 ?
*/



#include <iostream>
#include <vector>
#include <algorithm>

void recursion(std::vector<int>& values, int n, int k);

int main(int argc, const char * argv[]) {
    int n, k;
    std::cout << "How many numbers are there: ";
    std::cin >> n;
    std::vector<int> values(n);
    std::cout << "What is the increment value: ";
    std::cin >> k;
    std::cout << "Enter the values: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> values[i];
    }
    std::sort(values.begin(), values.end());
    recursion(values, n, k);

    
    return 0;
}

void recursion(std::vector<int>& values, int n, int k)
{
    int total(0);
    for(int i = 0; i < n; i++)
    {
        if (values[i] % k == 0)
        {
            total += 1;
        }
    }
    if(total >= (n - 1))
    {
        std::cout << "YES\n";
    }
    else
    {
        std::cout << "NO\n";
    }
    
    
    
}






