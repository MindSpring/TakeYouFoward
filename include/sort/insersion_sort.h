#pragma once
#include <iostream>

void insertionSort(int arr[], int n)
{
    for(int i{0}; i<n; i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}

void testInsersionSort(){
    int arr[]{3, 28, 1, 4, 6, 23, 5};
    insertionSort(arr, sizeof(arr)/sizeof(arr[0]));
    for(auto a: arr){
        std::cout<<a<<", ";
    }
    std::cout<<std::endl;
}