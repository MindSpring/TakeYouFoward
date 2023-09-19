#pragma once
#include <iostream>
#include <algorithm>
#include <utility>

int partitionArray(int input[], int start, int end) {
	int pivot {input[end]};
	int pIndex {start};
	int l{start};
	int h{end};
	for(l=start; l<=h; l++){
		if(input[l]<pivot){
			std::swap(input[l],input[pIndex]);
            pIndex++;
		}
	}
	std::swap(input[h],input[pIndex]);
	return pIndex;
}

void quickSort(int input[], int start, int end) {
    if (start >= end) {
        return;
    }
	int pIndex = partitionArray(input, start, end);
	quickSort(input, start, pIndex-1);
	quickSort(input, pIndex+1, end);
}

void testQuickSort(){
    int arr [] {4, 6, 2, 5, 7, 9, 1, 3};
    for(auto a: arr){
        std::cout<<a <<", ";
    }
    std::cout<<std::endl;

    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    
    for(auto a: arr){
        std::cout<<a <<", ";
    }
    std::cout<<std::endl;
}