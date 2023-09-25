#pragma once
#include <bits/stdc++.h>

void sortOneTwoThree(std::vector<int>& v){
    int low{0};
    int n{static_cast<int>(v.size())};
    int high {n-1};
    int mid{0};

    for(int i{low}; i<n; i++){
        if(v[mid]==0){
            std::swap(v[low++], v[mid++]);
        }
        else if(v[mid]==2){
            std::swap(v[high--], v[mid]);
        }
        else if(v[mid]==1){
            mid++;
        }
    }
}

void testSortOneTwoThree(){
    std::vector<int> v{1,0,2,1,2,0,2,0,1,1,0,2,0};
    sortOneTwoThree(v);
    for(auto a: v){
        std::cout<<a << ", ";
    }
    std::cout<<std::endl;
}