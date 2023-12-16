#pragma once
#include <bits/stdc++.h>
#include "node.h"

bool isLeafNode2(Node* root){
    return root && !root->left && !root->right;
}

void addLeftBoundary(Node* root, std::vector<int>& ans){
    if(!root){
        return;
    }
    Node* curr;
    if(root->left) curr = root->left;
    else curr = root->right;

    while(curr){
        ans.push_back(curr->data);
        if(curr->left) curr=curr->left;
        else curr = curr->right;
    }
}

void addLeafNode(Node* root, std::vector<int>& ans){
    if(!root) return;
    if(isLeafNode2(root)){
        ans.push_back(root->data);
        return ;
    }
    if(root->left) addLeafNode(root->left, ans);
    else addLeafNode(root->right, ans);
}

void addRightBoundary(Node* root, std::vector<int>& ans){
    if(!root){
        return;
    }
    Node* curr;
    if(root->right) curr = root->right;
    else curr = root->left;

    std::vector<int> temp;
    while(curr){
        temp.push_back(curr->data);
        if(curr->right) curr = curr->right;
        else curr=curr->left;
    }
    for(int i{static_cast<int>(temp.size())-1}; i>=0; i--){
        ans.push_back(temp[i]);
    }
}

std::vector<int> traverseBoundary2(Node* root){
    std::vector<int> ans;
    if(!root) return ans;
    addLeftBoundary(root, ans);
    addLeafNode(root, ans);
    addRightBoundary(root, ans);
    return ans;
}

void testTraverseBoundary2(){
    Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->left = new Node(8);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);
    root->right->right->right = new Node(30);
 
    for(auto a:traverseBoundary2(root)){
        std::cout<<a<<", ";
    }
    std::cout<<std::endl;
}