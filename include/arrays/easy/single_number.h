#pragma once
#include <bits/stdc++.h>

int findSingleNumber(std::vector<int>v){

    std::map<int, int> nMap;

    for(int i{0}; i<static_cast<int>(v.size()); i++){
        nMap[v[i]]++;
    }

    for(auto a:nMap){
        if(a.second==1){
            return a.first;
        }
    }

    return -1;
}


int findSingleNumberUsingXOR(std::vector<int>v){
    int XOR {0};    
    for(int i{0}; i<static_cast<int>(v.size()); i++){
        XOR = XOR ^ v[i];
    }

    return XOR;
}

//THIS WORKS ONLY WHEN TEH ARRAY IS SORTED
int getSingleElement(vector<int> &arr){
	int n = arr.size();
	
	// Creating an empty stack named, 'St'.
	stack<int> st;
	
	// Traversing through the array.
	for(int i = 0; i < n; ++i){
		if(st.empty() || st.top() != arr[i])
			st.push(arr[i]);
		else
			st.pop();
	}
	return st.top();
}

void testFindSingleNumber(){
    std::vector<int>v{0,0,1,1,2,2,3,3,4,5,5,6,6,7,7,8,8,9,9};
    std::cout << "Single Number       : " << findSingleNumber(v) << std::endl;
    std::cout << "Single Number XOR   : " << findSingleNumberUsingXOR(v) << std::endl;
    std::cout << "Single Number Stack : " << getSingleElement(v) << std::endl;
}