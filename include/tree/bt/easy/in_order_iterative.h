#pragma once
#include <bits/stdc++.h>
#include "node.h"

std::vector<int> inOrderIterative(Node* root){
    std::vector<int> res;
    std::stack<Node*>s;
    //s.push(root);
    while(true){
        if(root){
            s.push(root);
            root = root->left;
        }else{
            if(s.empty()) break;
            root= s.top();
            res.push_back(root->data);
            s.pop();
            root = root->right;
        }
    }
    return res;
}

void testInOrderIterative(){
    Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->left = new Node(8);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);
    root->right->right->right = new Node(30);

    
    for(auto a: inOrderIterative(root)){
        std::cout<< a << ", ";
    }
}