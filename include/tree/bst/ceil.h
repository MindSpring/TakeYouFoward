#pragma once
#include <bits/stdc++.h>
#include "node.h"

int findCeil(Node* root, int target){
    int ceil = -1;
    if (!root) return ceil;
    Node* curr = root;
    while(curr){
        if(curr->data == target){
            ceil = curr->data;
            return ceil;
        }
        else if(curr->data > target){
            ceil = curr->data;
            curr = curr->left;
        }
        else{
            curr = curr->right;
        }
    }
    return ceil;
}

void testFindCeil(){
    Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->left = new Node(8);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);
    root->right->right->right = new Node(30);
    
    std::cout<<"Ceil Node: " << findCeil(root, 11) << std::endl;
}