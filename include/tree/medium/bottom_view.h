#pragma once
#include <bits/stdc++.h>
#include <node.h>

std::vector<int> bottomView(Node* root){
    std::vector<int> res;
    std::map<int, int> map;
    std::queue<std::pair<Node*, int>> q;
    q.push({root, 0});
    while(!q.empty()){
        int size{static_cast<int>(q.size())};
        for(int i{0}; i<size; i++){
            auto a{q.front()};
            q.pop();
            Node* temp{a.first};
            int vertical{a.second};
            map[vertical]=temp->data;
            if(temp->left) q.push({temp->left, vertical-1});
            if(temp->right) q.push({temp->right, vertical+1});
        }
    }
    for(auto a:map){
        res.push_back(a.second);
    }
    return res;
}


void testBottomView(){
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

    std::vector<int> v {bottomView(root)};

    for(auto a:v){
        std::cout<<a<< " ";
    }
    std::cout<<std::endl;
}