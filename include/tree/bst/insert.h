#pragma once
#include <bits/stdc++.h>
#include "node.h"

Node* inseartNode(Node* root, int key){
    if(!root) return new Node(key);
    if(root->data > key){
        root->left=inseartNode(root->left, key);
    }else{
        root->right = inseartNode(root->right, key);
    }
    return root;
}

Node* inseartNode2(Node* root, int key){
    if(!root) return new Node(key);
    Node* curr = root;
    
    while(true){
        if(curr->data < key){
            if(!curr->right){
                curr->right = new Node(key);
            }
            curr = curr->right;
        }else{
            if(!curr->left){
                curr->left = new Node(key);
            }
            curr = curr->left;
        }
    }
    return root;
}

void inOrder(Node* root){
    if(!root) return;
    inOrder(root->left);
    std::cout<<root->data << " , ";
    inOrder(root->right);
}

void testInsertNode(){
    Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->left = new Node(8);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);
    root->right->right->right = new Node(30);
    
    inOrder(root);
    std::cout<<std::endl;

    inOrder(inseartNode(root, 11));
    std::cout<<std::endl;

    inOrder(inseartNode2(root, 11));
    std::cout<<std::endl;
}