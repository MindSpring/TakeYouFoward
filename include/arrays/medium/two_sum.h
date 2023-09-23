#pragma once
#include <bits/stdc++.h>

std::string read(int n, std::vector<int> book, int target)
{
    std::map<int, int> bMap;
    for(int i{0}; i<n; i++){
        if(bMap.find(target-book[i]) != bMap.end()){
            return "YES";
        }
        bMap[book[i]]=i;
    }
    return "NO";
}


void testRead(){

    std::vector<int> v {4, 1, 2, 3, 1};
    int n{static_cast<int>(v.size())};
    std::cout<<"Can Read or Can not? : " << read(n, v, 5) << std::endl;;
}