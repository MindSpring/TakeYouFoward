#pragma once
#include <bits/stdc++.h>
using namespace std;
vector<int> leftRotateArrayByKPositions(vector<int>arr, int k) {
    vector<int> temp(k);
    if(k<0)return arr;
    int n{static_cast<int>(arr.size())};

    for(int i{0}; i<k; i++){
        temp[i]=arr[i];
    }

    for(int j{k}; j<n; j++){
        arr[j-k]=arr[j];
    }

    for(int x{n-k}; x<n; x++){
        arr[x]=temp[x-(n-k)];
    }
    return arr;
}

vector<int> rightRotateArrayByKPositions(vector<int>arr, int k) {
    vector<int> temp(k);
    if(k<0)return arr;
    int n{static_cast<int>(arr.size())};

    for(int i{n-k}; i<n; i++){
        temp[i-(n-k)]=arr[i];
        arr[i]=0;
    }

    for(int j{n-k-1}; j>=0; j--){
        arr[j+k]=arr[j];
    }

    for(int x{0}; x<k; x++){
        arr[x]=temp[x];
    }
    return arr;
}

std::vector<int> rotateArrayLeft(std::vector<int>arr, int k){
    std::reverse(arr.begin(), arr.begin()+k);
    std::reverse(arr.begin()+k, arr.end());
    std::reverse(arr.begin(), arr.end());
    return arr;
}

std::vector<int> rotateArrayRight(std::vector<int>arr, int k){
    std::reverse(arr.end()-k, arr.end());
    std::reverse(arr.begin(), arr.end()-k);
    std::reverse(arr.begin(), arr.end());
    return arr;
}


void testRotateArrayByKPositions(){
    vector<int> v1 {1,2,3,4,5,6,7,8,9,0};
    std::cout<<"Original Array      : ";
    for(auto a : v1){
        std::cout<<a<<", ";
    }
    std::cout<<std::endl;

    v1 = leftRotateArrayByKPositions(v1, 3);
    std::cout<<"Left Rotated Array1 : ";
    for(auto a : v1){
        std::cout<<a<<", ";
    }
    std::cout<<std::endl;

    vector<int> v2 {1,2,3,4,5,6,7,8,9,0};
    v2 = rotateArrayLeft(v2, 3);
    std::cout<<"Left Rotated Array2 : ";
    for(auto a : v2){
        std::cout<<a<<", ";
    }
    std::cout<<std::endl;

    vector<int> v3 {1,2,3,4,5,6,7,8,9,0};
    v3 = rightRotateArrayByKPositions(v3, 3);
    std::cout<<"Right Rotated Array3: ";
    for(auto a : v3){
        std::cout<<a<<", ";
    }
    std::cout<<std::endl;

    vector<int> v4 {1,2,3,4,5,6,7,8,9,0};
    v4 = rotateArrayRight(v4, 3);
    std::cout<<"Right Rotated Array4: ";
    for(auto a : v4){
        std::cout<<a<<", ";
    }
    std::cout<<std::endl;

}