#pragma once
#include <bits/stdc++.h>

void printAllSubSequences(int i, std::vector<int>& output, std::vector<int> input, int n){
    if(i==n){
        for(auto a:output){
            std::cout<< a << " ";
        }
        if(0==output.size()){
            std::cout<< "{}";
        }
        std::cout<<std::endl;
        return;
    }

    printAllSubSequences(i+1, output, input, n);
    output.push_back(input[i]);
    printAllSubSequences(i+1, output, input, n);
    output.pop_back();
}

void testPrintAllSubSequences(){
    std::vector<int> output;
    std::vector<int> input {3,1,2};
    int n{static_cast<int>(input.size())};
    printAllSubSequences(0, output, input, n);
    return;
}