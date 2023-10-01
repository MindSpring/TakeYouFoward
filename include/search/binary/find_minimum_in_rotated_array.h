#pragma once
#include <bits/stdc++.h>

int findMin(vector<int>& arr)
{
	int low{0};
    int high{static_cast<int>(arr.size())-1};
    int minimum{INT_MAX};
        
    if(arr[low]<=arr[high]){
        return arr[low];
    }

    while(low<=high){
        int mid{low+(high-low)/2};
        
        if(arr[low]<=arr[mid]){
            minimum=std::min(minimum, arr[low]);
            low=mid+1;
        }
        else{
            minimum=std::min(minimum, arr[mid]);
            high=mid-1;
        }
    }
    return minimum;
}

void testFindMinimum(){
    std::vector<int> arr {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = findMin(arr);
    cout << "The minimum element is: " << ans << "\n";
}