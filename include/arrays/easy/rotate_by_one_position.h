#include <bits/stdc++.h> 
std::vector<int> leftRotateByOnePosition(std::vector<int>& arr, int n) {
    int temp{arr[0]};
    for(int i{1}; i<n; i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
}

std::vector<int> rightRotateByOnePosition(std::vector<int>& arr, int n) {
    int temp{arr[n-1]};
    for(int i{n-2}; i>=0; i--){
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
    return arr;
}

void testRotateByOnePosition(){ 
    std::vector<int> v{1,2,3,4,5,6,7,8,9,0};
    int n{static_cast<int>(v.size())};
    leftRotateByOnePosition(v, n);
    for(auto a:v){
        std::cout<<a<<", ";
    }
    std::cout<<std::endl;

    std::vector<int> v2{1,2,3,4,5,6,7,8,9,0};
    int n2{static_cast<int>(v2.size())};
    rightRotateByOnePosition(v2, n2);
    for(auto a:v2){
        std::cout<<a<<", ";
    }
    std::cout<<std::endl;
    
}
