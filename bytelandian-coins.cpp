//
//  main.cpp
//  bytelandian-coins
//
//  Created by Zack Fanning on 9/29/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 n Byteland they have a very strange monetary system.
 Each Bytelandian gold coin has an integer number written on it. A coin n can be exchanged in a bank into three coins: n/2, n/3 and n/4. But these numbers are all rounded down (the banks have to make a profit).
 You can also sell Bytelandian coins for American dollars. The exchange rate is 1:1. But you can not buy Bytelandian coins.
 You have one gold coin. What is the maximum amount of American dollars you can get for it?
 */

#include <iostream>

static unsigned long int a[1000000] = {0};

int converter (int coin);

int main(int argc, const char * argv[]) {
    int coin(0), dollars(0);
    //coin is less than one million
    std::cout << "Enter a coin to see how many american dollars you can get: ";
    std::cin >> coin;
    dollars = converter(coin);
    std::cout << "Your " << coin << " coin is worth " << dollars << " dollars\n";
    return 0;
}

int converter (int coin)
{
    int sum = coin/2 + coin/3 + coin/4;
    if (coin < 12)
    {
        return coin;
    }
    else if (a[coin] != 0)
    {
        return a[coin];
    }
    else if(coin >= sum)
    {
        return coin;
    }
    else if (coin < sum)
    {
        a[coin] = converter(coin/2) + converter(coin/3) +converter(coin/4);
    }
    return a[coin];
}







