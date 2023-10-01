#pragma once
#include <bits/stdc++.h>

int findFloor(std::vector<int> &a, int n, int x){
	int low{0};
	int high{n-1};
    int floor{-1};

	while(low<=high){
		int mid{(low+high)/2};
		if(a[mid]<=x){
			floor=mid;
			low=mid+1;
		}else{
			high=mid-1;
		}
	}
	return floor;
}


int findCeil(std::vector<int> &a, int n, int x){
	int low{0};
	int high{n-1};
    int ceil{-1};

	while(low<=high){
		int mid{(low+high)/2};
		if(a[mid]>=x){
			ceil=mid;
			high=mid-1;
		}else{
			low=mid+1;
		}
	}
	return ceil;
}
std::pair<int, int> getFloorAndCeil(std::vector<int> &a, int n, int x) {
	int floor = findFloor(a, n, x);
	int ceil = findCeil(a, n, x);
	std::pair<int, int> p (floor, ceil);
	return p;
}   

void testGetFloorAndCeil(){
	std::vector<int>arr {3, 4, 4, 7, 8, 10};
	int n = 6, x = 5;
	std::pair<int, int> ans = getFloorAndCeil(arr, n, x);
	std::cout << "The floor and ceil are: " << ans.first
	     << " " << ans.second << std::endl;
}