#pragma once
#include <bits/stdc++.h>

int findPeakElement(std::vector<int> &arr) {
    int low{0};
    int size{static_cast<int>(arr.size())};
    int high{size-1};

    if(size==1) return 0;
    if(arr[0]>arr[1]) return 0;
    if(arr[high]>arr[high-1]) return high;

    low=1; 
    high=high-1;

    while(low<=high){
        int mid{low+(high-low)/2};

        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            return mid;
        }
        else if(arr[mid]>arr[mid-1]){
            low=mid+1;
        }
        else if(arr[mid]>arr[mid+1]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}


void testFindPeakElement(){
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    int ans = findPeakElement(arr);
    cout << "The peak is at index: " << ans << "\n";
}