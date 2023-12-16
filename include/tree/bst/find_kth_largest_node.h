#pragma once
#include <bits/stdc++.h>
#include "node.h"

int inOrderFun(Node* root, int k, int& count){
    if(!root) return -1;
    int left  = inOrderFun(root->left, k, count);
    count++;
    if(count==k){
        return root->data;
    }
    int right = inOrderFun(root->right, k, count);
    
    if(left != -1) return left;
    else return right;
}

int inOrderNodeCount(Node* root, int& nodeCount){
    if(!root) return -1;
    int l = inOrderNodeCount(root->left, nodeCount);
    nodeCount++;    
    int r = inOrderNodeCount(root->right, nodeCount);
    return l+r;
}

int findKthLargestNode(Node* root, int k){
    int nodeCount{0};
    int count{0};
    inOrderNodeCount(root, nodeCount);
    return inOrderFun(root, nodeCount-k, count);
}

void inOrder4(Node* root){
    if(!root) return;
    inOrder4(root->left);
    std::cout<<root->data << " , ";
    inOrder4(root->right);
}

void testFindKthLargestNode(){
    Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->left = new Node(8);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);
    root->right->right->right = new Node(30);
    
    inOrder4(root);
    std::cout<<std::endl;

    std::cout<<"Kth Largest: " << findKthLargestNode(root, 3) << std::endl;
}