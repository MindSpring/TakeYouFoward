#pragma once
#include <bits/stdc++.h>

#include <iostream>
#include <vector>

std::vector<int> makeUnion(std::vector<int>& arr1, int n, std::vector<int>& arr2, int m) {
    std::vector<int> unionArray;
    if (n <= 0 || m <= 0) {
        return unionArray;
    }

    int i = 0;
    int j = 0;
    
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            if (unionArray.empty() || unionArray.back() != arr1[i]) {
                unionArray.push_back(arr1[i]);
            }
            i++;
        } else if (arr1[i] > arr2[j]) {
            if (unionArray.empty() || unionArray.back() != arr2[j]) {
                unionArray.push_back(arr2[j]);
            }
            j++;
        } else {
            // // Handle equal elements (optional)
            if (unionArray.empty() || unionArray.back() != arr1[i]) {
                unionArray.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    // Add any remaining elements from arr1 and arr2
    while (i < n) {
        if (unionArray.empty() || unionArray.back() != arr1[i]) {
            unionArray.push_back(arr1[i]);
        }
        i++;
    }
    
    while (j < m) {
        if (unionArray.empty() || unionArray.back() != arr2[j]) {
            unionArray.push_back(arr2[j]);
        }
        j++;
    }

    return unionArray;
}

void testUnionArray() {
    std::vector<int> arr1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> arr2{2, 3, 4, 4, 5, 11, 12}; 
    std::vector<int> Union = makeUnion(arr1, 10, arr2, 7);
    
    std::cout << "Union of arr1 and arr2 is:" << std::endl;
    for (auto val : Union) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}
