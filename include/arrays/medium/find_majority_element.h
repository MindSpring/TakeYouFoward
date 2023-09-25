#pragma once
#include <bits/stdc++.h>

int findMajorityElement(std::vector<int>v){
    int element{};
    int count{0};

    for(int i{1}; i<static_cast<int>(v.size()); i++){
        if(count==0){
            count=1;
            element = v[i];
        }
        else if(element==v[i]){
            count++;
        }else{
            count--;
        }
    }
    return element;
}

void testFindMajorityElement(){
    std::vector<int> v{1,2,3,2,4,2,5,2,2,7,2,8,2,9,2,0,1,2,1};
    std::cout<< "Majority Element: " << findMajorityElement(v) << std::endl;
}
