#pragma once

class NodeL{
public:
    int data;
    NodeL* next;
    NodeL* prev;

    NodeL(int d, NodeL* nxt, NodeL* pre){
        data=d;
        next=nxt;
        prev=pre;
    }

    NodeL(int d){
        data=d;
        next=nullptr;
        prev=nullptr;
    }
};