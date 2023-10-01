#pragma once
#include <bits/stdc++.h>

int searchInsert(std::vector<int>& arr, int m)
{
	int low{0};
	int high{static_cast<int>(arr.size())-1};
	int position{high+1};

	while(low<=high){
		int mid{(low+high)/2};
		if(arr[mid]>=m){
			position=mid;
			high=mid-1;
		}else{
			low=mid+1;
		}
	}
	return position;
}
int testSearchPosition()
{
    std::vector<int> arr = {1, 2, 4, 7};
    int x = 6;
    int ind = searchInsert(arr, x);
    cout << "The index is: " << ind << "\n";
    return 0;
}