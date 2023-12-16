#pragma once
#include <bits/stdc++.h>

void printAllSubSequences(int i, std::vector<std::vector<int>>&out, std::vector<int>& ds, std::vector<int> input, int n)
{
    if(i==n){
        for(auto a:ds){
            std::cout<< a << " ";
        }
        if(0==ds.size()){
            std::cout<< "{}";
        }

        out.push_back(ds);
        std::cout<<std::endl;
        return;
    }

    printAllSubSequences(i+1, out, ds, input, n);
    ds.push_back(input[i]);
    printAllSubSequences(i+1, out, ds, input, n);
    ds.pop_back();
}

void testPrintAllSubSequences(){
    std::vector<int> ds;
    std::vector<int> input {3,1,2};
    std::vector<std::vector<int>> out;
    int n{static_cast<int>(input.size())};
    printAllSubSequences(0, out, ds, input, n);

    std::cout << "=================" <<  std::endl;
    std::sort(out.begin(), out.end());

    for(auto a: out){
        for(auto x: a){
            std::cout<<x << ", ";
        }
        if(a.size()==0){
            std::cout<<"{}";
        }
        std::cout << std::endl;
    }

    return;
}