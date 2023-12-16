#pragma once
#include <bits/stdc++.h>
#include "node.h"

int inOrderF(Node* root, int k, int& count){
    if(!root) return -1;
    int left  = inOrderF(root->left, k, count);
    count++;
    if(count==k){
        return root->data;
    }
    int right = inOrderF(root->right, k, count);
    
    if(left != -1) return left;
    else return right;
}

int findKthSmallestNode(Node* root, int k){
    int count{0};
    return inOrderF(root, k, count);
}

void inOrder3(Node* root){
    if(!root) return;
    inOrder3(root->left);
    std::cout<<root->data << " , ";
    inOrder3(root->right);
}

void testFindKthSmallestNode(){
    Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->left = new Node(8);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);
    root->right->right->right = new Node(30);
    
    inOrder3(root);
    std::cout<<std::endl;

    std::cout<<"Kth Smallest: " << findKthSmallestNode(root, 3) << std::endl;
}