#pragma once
#include "node.h"
void inOrderTraversal(Node* root, std::vector<int>& inOrder){
    if(root==NULL){
        return;
    }
    inOrderTraversal(root->left, inOrder);
    inOrder.push_back(root->data);
    inOrderTraversal(root->right, inOrder);
    return;
}

void inorderTraverseIterative(Node* root, std::vector<int>& inOrder){
    std::stack<Node*> s;
    while(true){
        if(root!=NULL){
            s.push(root);
            root=root->left;
        }
        else{
            if(s.empty()) break;
            root=s.top();
            inOrder.push_back(root->data);
            s.pop();
            root=root->right;
        }
    }
}

void preOrderTraversal(Node* root, std::vector<int>& preOrder){
    if(root==NULL)return;

    preOrder.push_back(root->data);
    preOrderTraversal(root->left, preOrder);
    preOrderTraversal(root->right, preOrder);
    return;
}

void preOrderIterative(Node* root, std::vector<int>& preOrder){
    if(root==NULL)return;
    std::stack<Node*> s;
    s.push(root);

    while(!s.empty()){
        Node* node = s.top();
        s.pop();
        preOrder.push_back(node->data);
        if(node->right!=NULL)s.push(node->right);
        if(node->left!=NULL)s.push(node->left);
    }
}

void postOrderTraversal(Node* root, std::vector<int>& postOrder){
    if(root==NULL){
        return;
    }
    postOrderTraversal(root->left, postOrder);
    postOrderTraversal(root->right, postOrder);
    postOrder.push_back(root->data);
    return;
}

std::vector<int> levelOrderTraversal(Node* root, std::vector<int>& levelOrder){
    std::queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int size{static_cast<int>(q.size())};
        for(int i{0}; i<size; i++){
            Node* node=q.front();
            q.pop();
            if(node->left != NULL) q.push(node->left);
            if(node->right != NULL) q.push(node->right);
            levelOrder.push_back(node->data);
        }
    }
    return levelOrder;
}

vector<vector<int>> getTreeTraversal(Node *root){
    std::vector<int> inOrder;
    inOrderTraversal(root, inOrder);
    std::vector<int> inOrderIterative;
    inorderTraverseIterative(root,  inOrderIterative);

    std::vector<int> preOrder;
    preOrderTraversal(root, preOrder);
    std::vector<int> preOrderIterat;
    preOrderIterative(root, preOrderIterat);

    std::vector<int> postOrder;
    postOrderTraversal(root, postOrder);
    std::vector<int> levelOrder;
    levelOrderTraversal(root, levelOrder);

    std::vector<std::vector<int>> output{inOrder, inOrderIterative, preOrder, preOrderIterat, postOrder, levelOrder};
    return output;
}

void testGetTreeTraversal(){
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

    std::vector<std::vector<int>> v = getTreeTraversal(root);
    for(auto a:v){
        for(auto e:a){
            std::cout<<e<<", ";
        }
        std::cout<<std::endl;
    }
}