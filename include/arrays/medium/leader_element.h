#pragma once
#include <bits/stdc++.h>

std::vector<int> superiorElements(std::vector<int>&a) {
    std::vector<int> leader;
    int n{static_cast<int>(a.size())};
    int max{a[n-1]};
    leader.push_back(a[n-1]);

    for(int i{n-2}; i>=0; i--){
        if(a[i]>max){
            max=a[i];
            leader.push_back(max);
        }
    }

    std::sort(leader.begin(), leader.end(), std::greater<int>());

    return leader;
}

void testSuperiorElement(){
    std::vector<int> v{7,2,8,2,9,6, 4,2,0,1,2,1};
    v= superiorElements(v);
    for(auto a:v){
        std::cout<<a<<", ";
    }
    std::cout<<std::endl;
}