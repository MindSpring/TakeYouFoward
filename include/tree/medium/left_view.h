#pragma once
#include <bits/stdc++.h>
#include "node.h"

void left(Node* root, int level, std::vector<int>& res){
    if(!root) return;
    if(static_cast<int>(res.size())==level) res.push_back(root->data);
    if(root->left) left(root->left, level+1, res);
    if(root->right) left(root->right, level+1, res);
}

std::vector<int> leftView(Node* root){
    std::vector<int> res;
    if(!root) return res;
    left(root, 0, res);
    return res;
}

void right(Node* root, int level, std::vector<int>& res){
    if(!root) return;
    if(static_cast<int>(res.size())==level) res.push_back(root->data);
    if(root->right) right(root->right, level+1, res);
    if(root->left) right(root->left, level+1, res);
}

std::vector<int> rightView(Node* root){
    std::vector<int> res;
    if(!root) return res;
    right(root, 0, res);
    return res;
}

void testLeftView(){
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

    std::vector<int> vl {leftView(root)};

    for(auto a:vl){
        std::cout<<a<< " ";
    }
    std::cout<<std::endl;

    std::vector<int> vr {rightView(root)};

    for(auto a:vr){
        std::cout<<a<< " ";
    }
    std::cout<<std::endl;
}