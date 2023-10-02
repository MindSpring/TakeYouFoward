#pragma once
#include <bits/stdc++.h>

int singleNonDuplicate(vector<int>& arr)
{
    int size{static_cast<int>(arr.size())};
	int low{0};
    int high{size-1};
    
    if(size==1)return arr[0];
    if(arr[0]!=arr[1]) return arr[0];
    if(arr[high]!=arr[high-1]) return arr[high];
    
    low=1; high = high-1;

    while(low<=high){
        int mid{low+(high-low)/2};
        
        if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]){
            return arr[mid];
        }
        
        if((mid%2==1 && arr[mid]==arr[mid-1]) || (mid%2 == 0 && arr[mid]==arr[mid+1])){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1;    
}

void testSingleNonDuplicate()
{
    std::vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int ans = singleNonDuplicate(arr);
    cout << "The single element is: " << ans << "\n";
}