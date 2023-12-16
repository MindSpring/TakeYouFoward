#pragma once

#include "node.h"

int findDepth(Node* root){
    std::vector<int> level;
    int levelCount{0};
    std::queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int size{static_cast<int>(q.size())};
        for(int i{0}; i<size; i++){
            Node* node=q.front();
            q.pop();
            if(node->left != NULL)q.push(node->left);
            if(node->right != NULL)q.push(node->right);
            level.push_back(node->data);
        }
        levelCount++;
    }
    return levelCount;
}

int findDepthRecursive(Node *root)
{
  if (root == NULL) {
    return 0;
  }
  int left = findDepthRecursive(root->left);
  int right = findDepthRecursive(root->right);
  return max(left, right) + 1;
}

void testDepth(){
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

    std::cout<<"Depth of Tree : " << findDepth(root) <<std::endl;
    std::cout<<"Depth of Tree : " << findDepthRecursive(root) <<std::endl;
}