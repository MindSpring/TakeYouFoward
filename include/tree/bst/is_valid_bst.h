#pragma once
#include <bits/stdc++.h>
#include "node.h"

bool isValidBST(Node* root, int min, int max){
    if(!root) return true;

    if((root->data>=max) || (root->data<=min)) return false;

    return isValidBST(root->left, min, root->data) && isValidBST(root->right, root->data, max);
}

bool isBST(Node* root){
    return isValidBST(root, INT_MIN, INT_MAX);
}