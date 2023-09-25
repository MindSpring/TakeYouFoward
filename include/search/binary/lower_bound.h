#pragma once
/*
Problem Statement: Given a sorted array of N integers and an integer x, 
write a program to find the lower bound of x.
If all elements are smaller than the x return n;
*/
#include <bits/stdc++.h>

int lowerBound(vector<int> arr, int n, int x) {
	int low{0};
	int high{n-1};
	int lowerBound=-1;

	while(low<=high){
		int mid{(low+high)/2};
		if(arr[mid]>=x){
			lowerBound = mid;
			high = mid-1;
		}
		else{
			low = mid+1;
		}
	}
	return max(lowerBound, low);;
}


void testLowerBound(){
    std::vector<int> v {1,2,3,4,5,6,7,8,9};
    int n{static_cast<int>(v.size())};
    std::cout<<lowerBound(v, n, 10)<<std::endl;
}