#pragma once

/*
    Problem statement: You are given a sorted array of integers and a target, 
    your task is to search for the target in the given array. 
    Assume the given array does not contain any duplicate numbers.
*/

#include <bits/stdc++.h>

//===========================
//Iterative Implementation
//===========================
int searchIterative(vector<int> &nums, int target) {
    int low{0};
    int n{static_cast<int>(nums.size())};
    int high{n-1};

    if(n<=0){
        return -1;
    }

    while(low<=high){
        int mid{(high+low)/2};

        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

//===========================
//Recursive Implementation
//===========================
int binarySearch(vector<int> &nums, int target, int low, int high){
    if(low>high){
        return -1;
    }

    int mid{(high+low)/2};

    if(nums[mid]==target){
        return mid;
    } else if(nums[mid]>target) {
        return binarySearch(nums, target, low, mid - 1);
    } else {
        return binarySearch(nums, target, mid + 1, high);
    }
    return -1;
}

int searchRecursive(vector<int> &nums, int target) {
    int low{0};
    int n{static_cast<int>(nums.size())};
    int high{n-1};

    if(n<=0){
        return -1;
    }

    return binarySearch(nums, target, low, high);
}


void testFindXinSortedArray(){
    std::vector<int>v{3, 12, 18, 28, 29, 30, 35, 36, 40, 45};
    int x = searchIterative(v, 3);
    std::cout<<"Iterative : Target Index : " << x << std::endl;


    std::vector<int>v2{3, 12, 18, 28, 29, 30, 35, 36, 40, 45};
    int x2 = searchRecursive(v2, 3);
    std::cout<<"Recursive : Target Index : " << x2 << std::endl;

}