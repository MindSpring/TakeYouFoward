#pragma once
#include <bits/stdc++.h>

long long testMaxSumSubArray(vector<int> arr, int n)
{
    long long maxSum{LONG_MIN};
    long long sum{0};
    for(int i{0}; i<n; i++){
        sum +=arr[i];
        if(sum<0){
            sum=0;
        }
        if(maxSum<sum){
            maxSum=sum;
        }
    }
    
    return maxSum;
}


void testMaxSumSubArray(){

    std::vector<int> v {-7, -8, -16, -4, -8, -5, -7, -11, -10, -12, -4, -6, -4, -16, -10 };
    int n{static_cast<int>(v.size())};
    std::cout<<testMaxSumSubArray(v, n)<<std::endl;
}