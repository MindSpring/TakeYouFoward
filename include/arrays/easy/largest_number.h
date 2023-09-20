#pragma once
#include <iostream>

#include <bits/stdc++.h> 
int largestElement(std::vector<int> &arr, int n) {
    if(n<1){
        return -1;
    }
    sort(arr.begin(), arr.end());
    return arr[n-1];
}

int largestElement2(std::vector<int> &arr){
    int maxElement = 0;
    for (int i: arr){
        maxElement = std::max(maxElement, i);
    }    
    return maxElement;  
}

std::vector<int> getSecondOrderElements(std::vector<int> a, int n) { 
    //=======================================
    // std::vector<int> v;
    // v.resize(2);
    // if(n<2)return v;
    // sort(a.begin(), a.end());
    // v[0]=a[1];
    // v[1]=a[n-2];
    // return v;
    //=======================================

    int smallest{INT16_MAX};
    int largest{INT16_MIN};
    int secondSmallest{INT16_MAX};
    int secondLargest{INT16_MIN};

    for(int i {0}; i<n; i++){
        if(smallest>a[i]){
            secondSmallest = smallest;
            smallest=a[i];
        }
        else if(secondSmallest>a[i]){
            secondSmallest=a[i];
        }
        
        if(largest<a[i]){
            secondLargest = largest;
            largest=a[i];
        }
        else if(secondLargest<a[i]){
            secondLargest=a[i];
        }
    }
    std::vector<int> vv{secondLargest, secondSmallest};
    return vv;
}


void testLargestElement(){
    std::vector<int> v{2,4,2,1,3,8,-2,8,4};
    int n{static_cast<int>(v.size())};
    std::cout<<largestElement(v, n)<<std::endl;

    std::vector<int> v2{2,4,2,1,3,8,-2,8,4};
    //int n2{static_cast<int>(v2.size())};
    std::cout<<largestElement2(v2)<<std::endl;

    std::vector<int> v3{1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    v3=getSecondOrderElements(v3, 10);
    for(auto a:v3){
        std::cout<<a << ", ";
    }
    std::cout<<std::endl;
}