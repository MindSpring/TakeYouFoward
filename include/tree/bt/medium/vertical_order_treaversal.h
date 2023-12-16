#pragma once
#include<bits/stdc++.h>
#include "node.h"

std::vector<std::vector<int>> verticalOrderTraverse(Node* root){
    std::vector<std::vector<int>> res;
    std::map<int, std::map<int, std::multiset<int>>> map;
    std::queue<std::pair<Node*, std::pair<int, int>>> q;
    q.push({root, {0,0}});
    while(!q.empty()){
        int size{static_cast<int>(q.size())};
        for(int i{0}; i<size; i++){
            auto a{q.front()};
            q.pop();
            Node* temp{a.first};
            int vertical{a.second.first};
            int row{a.second.second};
            map[vertical][row].insert(temp->data);
            if(temp->left)q.push({temp->left,{vertical-1, row+1}});
            if(temp->right)q.push({temp->right,{vertical+1, row+1}});
        }
    }
    for(auto a:map){
        std::vector<int> level;
        for(auto b:a.second){
            level.insert(level.end(),b.second.begin(), b.second.end());
        }
        res.push_back(level);
    }
    return res;
}

void testVerticalOrderTraverse(){
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

    std::vector<std::vector<int>>v {verticalOrderTraverse(root)};

    for(auto a:v){
        for(auto e:a){
            std::cout<<e<< " ";
        }
        std::cout<<std::endl;
    }
}