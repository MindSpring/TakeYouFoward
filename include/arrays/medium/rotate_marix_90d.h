#pragma once
#include <bits/stdc++.h>

std::vector<std::vector<int>> rotateMatrix(std::vector<std::vector<int>> matrix){
    int n{static_cast<int>(matrix.size())};
    std::vector<std::vector<int>> rotatedMatrix(n, std::vector < int > (n, 0));
    for(int i{0}; i<n; i++){
        for(int j{0}; j<n; j++){
            rotatedMatrix[j][n-1-i]=matrix[i][j];
        }
    }
    return rotatedMatrix;
}

void testRotateMatrix(){
    std::vector < vector < int >> arr {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    std::cout<<"Original Matrix: "<<std::endl;
    for(auto a:arr){
        for(auto e:a){
            std::cout<<e<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;

    arr = rotateMatrix(arr);

    std::cout<<"Rotated Matrix: "<<std::endl;
    for(auto a:arr){
        for(auto e:a){
            std::cout<<e<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}