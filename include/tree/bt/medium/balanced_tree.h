#pragma once
#include "node.h"

int height(Node* root){
    if(root==NULL) return -1;
    
    int left{height(root->left)};
    if(left==-1) return -1;

    int right{height(root->right)};
    if(right==-1) return -1;

    if(abs(left-right)>1)return -1;
    return max(left, right)+1;
}

bool isBalanced(Node* root){
    return height(root)!=-1;
}

void testIsBalanced(){
    Node* one = new Node(1);
    Node* two = new Node(2);
    Node* three = new Node(3);
    Node* four = new Node(4);
    Node* five = new Node(5);
    Node* six = new Node(6);
    Node* seven = new Node(7);
    Node* eight = new Node(8);
    Node* nine = new Node(9);
    Node* ten = new Node(10);
    Node* eleven = new Node(11);
    Node* twelve = new Node(12);
    Node* root = new Node(0);

    root->left=one;
    root->right=two;
    one->left=three;
    one->right=four;
    two->left=five;
    two->right=six;
    three->left=seven;
    three->right=eight;
    four->left=nine;
    four->right=ten;
    five->left=eleven;
    five->right=twelve;

    std::cout<< "Is balanced : " << isBalanced(root) << std::endl;
}