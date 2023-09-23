#pragma once
#include <bits/stdc++.h>

int largestSubArray(std::vector<int> arr, long long k) {
    std::unordered_map<long long,int> hm;
    long long sum = 0;
    int len = 0;
    for(int i = 0; i < arr.size();i++){
        sum+= arr[i];

        if(sum == k){
            len = max(len,i+1);
        }

        long long x = sum - k;
        if(hm.find(x) != hm.end()){
            len = max(len,i-hm[x]);
        }
 
        // update only if prefix sum is not there 
        // so that we get longest length
        if(hm.find(sum) == hm.end()){
            hm[sum] = i;
        }
    }

    return len;
}

void testLargestSubArray(){

    std::vector<int>v {0, 2, 5, 3, 3, 4, 4, 3, 0, 5, 5, 4, 4, 4, 3, 2, 0, 2, 3, 1, 3, 0, 4, 3, 1, 4, 5, 2, 4, 3, 1, 4, 5, 0, 3, 4, 0};
    int length = largestSubArray(v, 52);
    std::cout<<"Largest Sub Array Lenght : " << length << std::endl;
}