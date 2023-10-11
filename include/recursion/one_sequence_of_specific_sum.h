#pragma once
#include <bits/stdc++.h>

bool sequenceWithSpecificSum(int i, std::vector<int>& out, std::vector<int> in, int n, int sum, int target){
    if(i==n){
        if(sum==target){
            return true;
        }else{
            return false;
        }
    }

    out.push_back(in[i]);
    sum += in[i];
    if(sequenceWithSpecificSum(i+1, out, in, n, sum, target)==true){
        return true;
    }
    out.pop_back();
    sum -= in[i];
    if(sequenceWithSpecificSum(i+1, out, in, n, sum, target)==true){
        return true;
    }

    return false;
}

void testSequenceWithSpecificSum(){
    std::vector<int> in {3,2,1};
    std::vector<int> out;
    int n {static_cast<int>(in.size())};
    int sum {0};
    int target {2};
    sequenceWithSpecificSum(0, out, in, n, sum, target);
    for(auto a:out){
        std::cout<< a << std::endl;
    }
    return ;
}