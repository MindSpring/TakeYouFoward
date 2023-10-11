#pragma once
#include <bits/stdc++.h>

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(){
        this->data=0;
        this->left=nullptr;
        this->right=nullptr;
    }

    Node(int data){
        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
    }

    Node(int data, Node* left, Node* right){
        this->data=data;
        this->left=left;
        this->right=right;
    }
};