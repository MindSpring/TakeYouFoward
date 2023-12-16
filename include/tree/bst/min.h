#pragma once
#include <bits/stdc++.h>
#include "node.h"

int findMin(Node* root){
    int min = -1;
    if(!root) return min;
    
    Node* curr = root;
    while(curr){
        if(!curr->left)
            min = curr->data;
        curr = curr->left;
    }
    return min;
}

void testMinNode(){
    Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->left = new Node(8);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);
    root->right->right->right = new Node(30);
    
    std::cout<<"Minimum Node: " << findMin(root) << std::endl;
}