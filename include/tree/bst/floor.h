#pragma once
#include <bits/stdc++.h>
#include "node.h"

int findFloor(Node* root, int target){
    int floor = -1;
    if (!root) return floor;
    Node* curr = root;
    while(curr){
        if(curr->data == target){
            floor = curr->data;
            return floor;
        }
        else if(curr->data < target){
            floor = curr->data;
            curr = curr->right;
        }
        else{
            curr = curr->left;
        }
    }
    return floor;
}

void testFindFloor(){
    Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->left = new Node(8);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);
    root->right->right->right = new Node(30);
    
    std::cout<<"Floor Node: " << findFloor(root, 12) << std::endl;
}