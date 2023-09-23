#pragma once
#include <bits/stdc++.h>

int missingNumber(std::vector<int> v, int n){
    int sum {n*(n+1)/2};
    int actual {0};
    for(int i{0}; i<n; i++){
        if(v[i]<n+1){
            actual += v[i];
        }
    }
    return sum-actual;
}

int missingNumberUsingHashArray(std::vector<int> v, int n){

    int hash[n+1]{0};

    for(int i{0}; i<n-1; i++){
        hash[v[i]]++;
    }

    for(int i{1}; i<=n; i++){
        if(hash[i]==0){
            return i;
        }
    }
    return -1;
}

int missingNumberUsingXOR(std::vector<int> v, int n){
    int XOR1{0};
    int XOR2{0};

    for(int i{0}; i<n-1; i++){
        XOR1 = XOR1 ^ (i+1);
        XOR2 = XOR2 ^ (v[i]);
    }
    XOR1 = XOR1 ^ n;
    return XOR1 ^ XOR2;
}

void findMissingNumber(){
    // std::vector<int> v{1,2,3,4};
    std::vector<int> v{4, 6, 7, 9, 2, 1, 8, 11, 10, 3 };
    // std::vector<int> v{1,2,3 };

    int n{static_cast<int>(v.size())};
    std::cout<< "Missing Number: "<< missingNumber(v, n+1) <<std::endl;
    std::cout<< "Missing Number: "<< missingNumberUsingHashArray(v, n+1) <<std::endl;
    std::cout<< "Missing Number: "<< missingNumberUsingXOR(v, n+1) <<std::endl;
}