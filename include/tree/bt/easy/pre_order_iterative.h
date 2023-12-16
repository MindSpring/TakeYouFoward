#pragma once
#include <bits/stdc++.h>
#include "node.h"

std::vector<int> preOrderIterative(Node* root){
    std::vector<int> res;
    if(!root) return res;
    std::stack<Node*>s;
    s.push(root);
    while(!s.empty()){
        Node* temp = s.top();
        res.push_back(temp->data);
        s.pop();
        if(temp->right) s.push(temp->right);
        if(temp->left) s.push(temp->left);        
    }
    return res;
}

void testPreOrderIterative(){
    Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->left = new Node(8);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);
    root->right->right->right = new Node(30);

    
    for(auto a: preOrderIterative(root)){
        std::cout<< a << ", ";
    }
    std::cout<<std::endl;
}