#pragma once

#include <bits/stdc++.h>

int findKRotation(vector<int> &arr){
    int low{0};
    int high{static_cast<int>(arr.size())-1};
    int minimum{INT_MAX};
    int mIndex{-1};
    
    if(arr[low]<=arr[high]){
        return low;
    }   
    
    while(low<=high){
        int mid{low+(high-low)/2};
        
        if(arr[low]<=arr[mid]){
            if(arr[low]<minimum){
                minimum=std::min(minimum, arr[low]);
                mIndex = low;
            }
            low=mid+1;
        }
        else{
            if(arr[mid]<minimum){
                minimum=std::min(minimum, arr[mid]);
                mIndex=mid;
            }
            high=mid-1;
        }
    }
    return mIndex;
}

void testFindKRotation()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = findKRotation(arr);
    cout << "The array is rotated " << ans << " times.\n";
}