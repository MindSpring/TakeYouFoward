#pragma once
#include <bits/stdc++.h>

int findFirstOccurence(vector<int>&arr, int n, int x){
	int low{0};
	int high{n-1};
	int first{-1};

	while(low<=high){
		int mid{low+(high-low)/2};
		if(arr[mid]==x){
			first=mid;
			high=mid-1;
		}
		else if(arr[mid]<x){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return first;
}

int findLastOccurence(vector<int>&arr, int n, int x){
	int low{0};
	int high{n-1};
	int last{-1};

	while(low<=high){
		int mid{low+(high-low)/2};
		if(arr[mid]==x){
			last=mid;
			low=mid+1;
		}
		else if(arr[mid]<x){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return last;
}


int count(vector<int>& arr, int n, int x) {
	 int first = findFirstOccurence(arr, n, x);
	 int last = findLastOccurence(arr, n, x);
	 if(first==-1) 
	 	return 0;
	 else
	 	return last-first+1;	
}

void testCount(){
    std::vector<int> arr  {2, 4, 6, 8, 8, 8, 11, 13};
    int n = 8, x = 8;
    int ans = count(arr, n, x);
    cout << "The number of occurrences is: "  << ans << "\n";
}