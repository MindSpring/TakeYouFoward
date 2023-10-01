#pragma once
#include <bits/stdc++.h>

int search(vector<int>& arr, int n, int k)
{
    int low{0};
    int high{n-1};
    int index{-1};

    while(low<=high){
        int mid{low+(high-low)/2};
        if(arr[mid]==k){
            //Element found
            return mid;
        }
        else if(arr[low] <= arr[mid]){
            //Sorted half of the array
            if(arr[low]<= k && k <= arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            //Un-Sorted half of the array
            if(arr[mid]<= k && k <= arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return index;
}


void testSearchRotatedArray(){
    std::vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n = 9, k = 1;
    int ans = search(arr, n, k);
    if (ans == -1)
        cout << "Target is not present.\n";
    else
        cout << "The index is: " << ans << "\n";
}