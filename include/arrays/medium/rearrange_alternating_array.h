#pragma once
#include <bits/stdc++.h>

std::vector<int> alternatingNumbers(std::vector<int>&a) {
    int pI{0};
    int nI{1};
    int i{0};
    std::vector<int>v(static_cast<int>(a.size()));
    int n{static_cast<int>(a.size())};
    while(i<n){
        if(a[i]>=0){
            v[pI]=a[i];
            pI +=2;
        }
        if(a[i]<0){
            v[nI]=a[i];
            nI +=2;
        }
        i++;
    }
    return v;
}

//If positive number count != negetive number count
std::vector<int> alternatingNumbers2(std::vector<int>&a) {
    std::vector<int>v(static_cast<int>(a.size()));
    int n{static_cast<int>(a.size())};

    std::vector<int> positive;
    int positiveCount{0};
    std::vector<int> negetive;
    int negetiveCount{0};

    for(int i{0}; i<n; i++){
        if(a[i]<0){
            negetive.push_back(a[i]);
            negetiveCount++;
        }else{
            positive.push_back(a[i]);
            positiveCount++;
        }
    }

    for(int i{0}; i<std::min(negetiveCount, positiveCount); i++){
        a[2*i]=positive[i];
        a[(2*i)+1]=negetive[i];
    }
    if(positiveCount<negetiveCount){

        for(int i{positiveCount}; i<negetiveCount; i++ ){
            a.push_back(negetive[i]);
        }
    }
    else{
        for(int i{negetiveCount}; i<positiveCount; i++ ){
            a.push_back(positive[i]);
        }
    }
    return a;
}

void testAlternatingNumbers(){
    std::vector<int>v {-2,-3,1,4,5,7,-5,-6,-8,10};
    v = alternatingNumbers(v);
    for(auto a: v){
        std::cout<<a<<", ";
    }
    std::cout<<std::endl;

    std::vector<int>v2 {-2,-3,1,4,5,7,-5,-6,-8,10};
    v2 = alternatingNumbers(v2);
    for(auto a: v2){
        std::cout<<a<<", ";
    }
    std::cout<<std::endl;
}