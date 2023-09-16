#pragma once
#include <iostream>
#include <vector>

void selectionSort(std::vector<int>&arr) {
    int n{static_cast<int>(arr.size())};
    for(int i{0}; i<n; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        int temp {arr[min]};
        arr[min]=arr[i];
        arr[i]=temp;
    }
}

void testSelectionSort(){
    std::vector<int> v{2,13,4,1,3,6};
    selectionSort(v);
    for(auto a:v){
        std::cout<<a<<", ";
    }
    std::cout<<std::endl;
}