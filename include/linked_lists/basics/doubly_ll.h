#pragma once
#include <bits/stdc++.h>

#include "../nodel.h"

NodeL* convertArray2DLL(std::vector<int>& arr){
    NodeL* head = new NodeL(arr[0]);
    NodeL* previous = head;

    for(int i=1; i<static_cast<int>(arr.size()); i++){
        NodeL* temp = new NodeL(arr[i], nullptr, previous);
        previous->next = temp;
        previous = temp;
    }
    return head;
}

void printNode(NodeL* node){
    NodeL* temp = node;
    while(temp){
        std::cout<<temp->data<< ", ";
        temp = temp->next;
    }
    std::cout<<std::endl;
}

void testConvertArray2DLL(){
    std::vector<int> arr = {0,1,2,3,4,5,6};
    NodeL* head = convertArray2DLL(arr);
    printNode(head);
}

NodeL* deleteHead(NodeL* head){
    if(!head || !head->next) return nullptr;

    NodeL* prev = head;
    head = head->next;
    head->prev = nullptr;
    delete prev;
    prev = nullptr;
    return head;
}


void testDeleteHead(){
    std::vector<int> arr = {0,1,2,3,4,5,6};
    NodeL* head = convertArray2DLL(arr);
    printNode(head);
    head = deleteHead(head);
    printNode(head);
}

NodeL* deleteTail(NodeL* head){
    if(!head || !head->next) return nullptr;
    
    NodeL* temp = head;
    while(temp->next){
        temp=temp->next;
    }
    NodeL* newTail = temp->prev;
    newTail->next = nullptr;
    temp->prev = nullptr;
    delete temp;
    temp = nullptr;
    return head;
}


void testDeleteTail(){
    std::vector<int> arr = {0,1,2,3,4,5,6};
    NodeL* head = convertArray2DLL(arr);
    printNode(head);
    head = deleteTail(head);
    printNode(head);
}