#pragma once
#include <bits/stdc++.h>

int countSequencesWithKSum(int i, std::vector<int> in, int n, int sum, int target){
    if(i==n){
        if(sum==target){
            return 1;
        }else{
            return 0;
        }
    }

    sum +=in[i];
    int left = countSequencesWithKSum(i+1, in, n, sum, target);
    sum -=in[i];
    int right = countSequencesWithKSum(i+1, in, n, sum, target);
    
    return left+right;
}

void testCountSequencesWithKSum(){
    std::vector<int> in {1,2,1};
    int n {static_cast<int>(in.size())};
    int sum{0};
    int target{2};
    int count {countSequencesWithKSum(0, in, n, sum, target)};
    std::cout<< "Sequence Count : " << count << std::endl;
}