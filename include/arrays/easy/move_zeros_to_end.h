#pragma once
#include <bits/stdc++.h>

void moveZerosToEnd(std::vector<int>& v, int n){
    if(n<=0) return ;
    
    int k{0};
    for(int i{0}; i<n; i++){
        if(v[i]!=0){
            std::swap(v[k++], v[i]);
        }
    }
}

void moveZerosToFront(std::vector<int>& v, int n){
    if(n<=0) return ;
    
    int k{n-1};
    for(int i{k}; i>=0; i--){
        if(v[i]!=0){
            std::swap(v[k--], v[i]);
        }
    }
}

void testMoveZerosToEnd(){
    std::vector<int> v {1,0,2,3,0,4,0,5};
    int n{static_cast<int>(v.size())};
    moveZerosToEnd(v, n);

    for(auto a: v){
        std::cout<<a<<", ";
    }
    std::cout<<std::endl;

    std::vector<int> v2 {1,0,2,3,0,4,0,5};
    moveZerosToFront(v2, n);

    for(auto a: v2){
        std::cout<<a<<", ";
    }
    std::cout<<std::endl;
}