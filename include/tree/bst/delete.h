#pragma once
#include <bits/stdc++.h>
#include "node.h"

Node* findLastRightNode(Node* root){
    if(!root) return root;
    if(!root->right) return root;
    return findLastRightNode(root->right);
}

Node* helper(Node* root){
    if(!root) return root;
    if(!root->left) return root->right;
    if(!root->right) return root->left;

    Node* rightChild = root->right;
    Node* lastRight = findLastRightNode(root->left);
    lastRight->right = rightChild;
    return root->left;
}

Node* deleteNode(Node* root, int key){
    if(!root) return root;
    if(root->data==key){
        return helper(root);
    }
    Node* dummy = root;
    while(root){
        if(root->data>key){
            if(root->left && root->left->data == key){
                root->left = helper(root->left);
            }else{
                root = root->left;
            }
        }
        else{
            if(root->right && root->right->data == key){
                root->right = helper(root->right);
            }else{
                root = root->right;
            }
        }
    }
    return dummy;
}

void inOrder2(Node* root){
    if(!root) return;
    inOrder2(root->left);
    std::cout<<root->data << " , ";
    inOrder2(root->right);
}

void testDeleteNode(){
    Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->left = new Node(8);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);
    root->right->right->right = new Node(30);
    
    inOrder2(root);
    std::cout<<std::endl;

    inOrder2(deleteNode(root, 20));
    std::cout<<std::endl;
}