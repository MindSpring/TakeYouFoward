#pragma once
#include <bits/stdc++.h>
int removeDuplicates(std::vector<int> &arr, int n) {
	int lastUniqueIndex{0};
	for(int i{0}; i<n; i++){
		if(arr[i]!=arr[i+1]){
			arr[lastUniqueIndex++]=arr[i];
		}
	}
	return lastUniqueIndex;
}
void testRemoveDuplicates(){
    std::vector<int> v{0, 0, 1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9};
    std::cout<<"Unique Element Count : " << removeDuplicates(v, 20)<<std::endl;
}