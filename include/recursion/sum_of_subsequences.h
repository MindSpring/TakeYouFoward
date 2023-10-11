#pragma once
#include <bits/stdc++.h>

void subSequencesWithKSum(int i, std::vector<int>& output, int& sum, int target, std::vector<int> input, int n){
    if(i==n) {
        if(sum==target){
            for(auto a:output){
                std::cout<< a << " ";
            }
            std::cout<<std::endl;
        }
        return;
    }
    output.push_back(input[i]);
    sum+=input[i];
    subSequencesWithKSum(i+1, output, sum, target, input, n);
    output.pop_back();
    sum-=input[i];
    subSequencesWithKSum(i+1, output, sum, target, input, n);
}

void testSubSequencesWithKSum(){
    std::vector<int> input {1,2,1};
    std::vector<int> output;
    int sum{0};
    int target{2};
    int n{static_cast<int>(input.size())};
    subSequencesWithKSum(0, output, sum, target, input, n);
    return ;
}