#pragma once
#include <bits/stdc++.h>
#include "node.h"

std::vector<std::vector<int>> zigZagTraverse(Node* root){
    std::vector<std::vector<int>> ans;
    std::queue<Node*> q;
    q.push(root);
    bool fowardFlag {true};

    while(!q.empty()){
        int n = static_cast<int>(q.size());
        std::vector<int> v;
        for(int i=0; i<n; i++){
            Node* temp = q.front();
            q.pop();
            v.push_back(temp->data);
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        if(!fowardFlag){
            std::reverse(v.begin(), v.end());
        }
        fowardFlag = !fowardFlag;
        ans.push_back(v);
    }
    return ans;
}

void testZigZagTraversal(){
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

    std::vector<std::vector<int>> v = zigZagTraverse(root);
    for(auto a:v){
        for(auto e:a){
            std::cout<<e<<", ";
        }
        std::cout<<std::endl;
    }
}

