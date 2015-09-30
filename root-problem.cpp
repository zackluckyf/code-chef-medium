//
//  main.cpp
//  root-problem
//
//  Created by Zack Fanning on 9/29/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Chef has a binary tree. The binary tree consists of 1 or more nodes. Each node has a unique integer
 id. Each node has up to 2 children, which are identified by their ids, and each node is the child 
 of at most 1 other node. A node X is considered to be an ancestor of node Y if node Y is a child of
 node X or if there is some node Z for which X is an ancestor of Z and Y is a child of Z. No node is
 an ancestor of itself. A special node called the root node is an ancestor of all other nodes.
 
 Chef has forgotten which node of his tree is the root, and wants you to help him to figure it out.
 Unfortunately, Chef's knowledge of the tree is incomplete. He does not remember the ids of the 
 children of each node, but only remembers the sum of the ids of the children of each node.
 */

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
    int nodes, x(0);
    std::vector<int> nodeNum(nodes);
    std::vector<int> nodeVal(nodes);
    std::cout << "How many nodes are there: ";
    std::cin >> nodes;
    //assume user types the nodes in order 1, 2, 3...
    std::cout << "Enter the node and then the sum of it's children: ";
    for (int i = 0; i < nodes; i++)
    {
        std::cin >> nodeNum[i];
        std::cin >> nodeVal[i];
    }
    for (int i = 0; i < nodes; i++)
    {
        x = x + nodeNum[i] - nodeVal[i];
    }
    if (x <= nodes)
    {
    std::cout << "The root node is " << x << "\n";
    }
    else
    std::cout << "Their is no tree with these specifications";
    return 0;
}
