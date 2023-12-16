#pragma once
#include <bits/stdc++.h>
#include "tree_node.h"

/************************************************************

    Following is the Binary Tree node structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode()
        {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

bool isLeafNode(TreeNode<int>* node){
    return node && !node->left && !node->right;
}

void addLeftBoundary(TreeNode<int>* root, std::vector<int>& res){
    TreeNode<int>* curr;
    if(!root) return;
    if(root->left) curr = root->left;
    else if(root->right) curr = root->right;

    while(curr){
        if(!isLeafNode(curr)) res.push_back(curr->data);
        if(curr->left) curr= curr->left;
        else curr = curr->right;
    }
}

void addLeafNodes(TreeNode<int>* root, std::vector<int>& res){
    if (isLeafNode(root)) {
        res.push_back(root->data);
        return;
    }
    if(root->left) addLeafNodes(root->left, res);
    if(root->right) addLeafNodes(root->right, res);
}

void addRightBoundary(TreeNode<int>* root, std::vector<int>& res){
    TreeNode<int>* curr;
    std::vector<int> temp;
    if(root->right) curr = root->right;

    while(curr){
        if(!isLeafNode(curr)) temp.push_back(curr->data);
        if(curr->right) curr= curr->right;
        else curr = curr->left;
    }
    int size{static_cast<int>(temp.size())};
    for(int i{size-1}; i>=0; --i){
        res.push_back(temp[i]);
    }
}

std::vector<int> traverseBoundary(TreeNode<int> *root)
{
    std::vector<int> res;
	if(!root) return res;

    if(!isLeafNode(root)) res.push_back(root->data);

    addLeftBoundary(root, res);
    addLeafNodes(root, res);
    addRightBoundary(root, res);

    return res;
}

void testTraverseBoundary(){
    TreeNode<int>* root = new TreeNode<int>(15);
    root->left = new TreeNode<int>(10);
    root->right = new TreeNode<int>(20);
    root->left->left = new TreeNode<int>(8);
    root->left->right = new TreeNode<int>(12);
    root->right->left = new TreeNode<int>(16);
    root->right->right = new TreeNode<int>(25);
    root->right->right->right = new TreeNode<int>(30);
 
    for(auto a:traverseBoundary(root)){
        std::cout<<a<<", ";
    }
    std::cout<<std::endl;
}