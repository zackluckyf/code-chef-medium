//
//  main.cpp
//  ABC-strings
//
//  Created by Zack Fanning on 11/17/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Mike likes strings. He is also interested in algorithms. A few days ago he discovered for himself a 
 very nice problem: You are given an AB-string S. You need to count the number of substrings of S, 
 which have an equal number of 'A'-s and 'B'-s. Do you know how to solve it? Good.
 Mike will make the problem a little bit more difficult for you. You are given an ABC-string S. You
 need to count the number of substrings of S, which have an equal number of 'A'-s, 'B'-s and 'C'-s.
 A string is called AB-string if it doesn't contain any symbols except 'A' or 'B'. A string is 
 called ABC-string if it doesn't contain any symbols except 'A', 'B' or 'C'.
 */

#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main(int argc, const char * argv[]) {
    long length;
    int numSubstrings(0);
    string input;
    // prompt user for a string
    cout << "Enter a string made up of 'A' 'B' and 'C': ";
    cin >> input;
    length = input.length();
    // for loop which evaluates from the beginning of the string until the third to last character
    for (int i = 0; i < length - 2; i++)
    {
        // checks for the situation when i, i+1, and i+2 are all different
        if (input[i] != input [i+1] && input[i] != input[i+2] && input[i+1] != input[i+2])
            {
                numSubstrings++;
            }
    }
    cout << "The number of substrings that contain 'A' 'B' and 'C' is: " << numSubstrings;
    
    return 0;
}
