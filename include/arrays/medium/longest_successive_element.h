#pragma once
#include <bits/stdc++.h>

int longestSuccessiveElements(vector<int>&a) {
    int element{a[0]};
    int count=1;
    int maxCount {INT_MIN};
    int lastIndex{0};

    for(int i{1}; i<static_cast<int>(a.size()); i++){
        
        if(element==a[i]){
            count++;
            if(maxCount<count){
                maxCount=count;
                lastIndex=i;
            }
        }else{
            count=0;
        }
    }
    return maxCount;
}

void testLongestSuccessiveElement(){
    std::vector<int> v {100, 200, 1, 2, 3, 4};
}