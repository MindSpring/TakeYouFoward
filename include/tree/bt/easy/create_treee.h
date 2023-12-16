#pragma once
#include "node.h"

Node* solve(std::vector<int>& v, int i){
    Node* head=new Node(v[i]);
    if(i>=static_cast<int>(v.size()))return NULL;
    head->left=solve(v, 2*i+1);
    head->right=solve(v, 2*i+2);
    return head;
}

Node* createTree(std::vector<int>& v){
    return solve(v,0);
}

void inOrderTrav(Node* curr) {
  if (curr == NULL)
    return;

  inOrderTrav(curr->left);
  std::cout<<curr->data << ", ";
  inOrderTrav(curr->right);
}

void testCreateTree(){
    std::vector<int>v {0,1,2,3,4,5,6,7,8,9};
    inOrderTrav(createTree(v));
}