#pragma once
#include <bits/stdc++.h>

int countConsecutiveOnce(std::vector<int> v){
    int counter{0};
    int maxCounter{0};
    int n{static_cast<int>(v.size())};

    for(int i{0}; i<n; i++){
        if(v[i]==1){
            counter++;
            maxCounter = std::max(maxCounter, counter);
        }else{
            counter=0;
        }
    }
    return maxCounter;
}

void testCountConsecutiveOnce(){
    std::vector<int> v{1,1,3,2,4,1,1,1,1,1,3,1,1,1,1,1,1,1};
    std::cout<<"Max Consecutive One Count : "<< countConsecutiveOnce(v) << std::endl;
}