#pragma once
#include <iostream>

void bubbleSort(int arr[], int n) 
{
    for(int i{0}; i<n; i++){
        for(int j{0}; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                std::swap(arr[j], arr[j+1]);
            }
        }
    }
}

void testBubbleSort(){
    int arr[]{2,13,4,1,3,6,28};
    int n{sizeof(arr)/sizeof(arr[0])};
    bubbleSort(arr, n);
    for(auto a : arr){
        std::cout<<a<<", ";
    }
    std::cout<<std::endl;

}