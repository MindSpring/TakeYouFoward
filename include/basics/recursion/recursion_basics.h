#pragma once
#include <iostream>
#include <vector>

void recursive(int x, std::vector<int>& v){
    if(0==x)return;
    recursive(x-1, v);
    v.push_back(x);
}


void restRecursive() {
    std::vector<int> v;
    int x{10};
    recursive(x, v);
    for(auto a: v){
        std::cout<<a << " ";
    }
    std::cout<<std::endl;
}