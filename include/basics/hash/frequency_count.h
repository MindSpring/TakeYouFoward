#pragma once
#include <map>
#include <vector>

std::vector<int> countFrequency(int n, int x, std::vector<int> &nums){
    //Create a map to store the frequency values in sorted manner
    std::map<int, int> uom;
    std::vector<int> result;

    if(x>n){}

    result.resize(n, 0);

    //Iterate through the array and count frequencies of each number and update the map accordingly;
    for(int i{0}; i<n; i++){
        //Validate the conditions
        if(nums[i]>n){
            continue;
        }
        uom[nums[i]]++;        
    }

    for(int i{0}; i<n; i++){
        //Add frequency values to a vector and reurn it;
        result[i]=uom[i+1];
        //std::cout<<uom[nums[i]];
    }
    return result;
}

void testFrequencyCount(){
    int n{0};
    int x{0};
    int t{0};
    std::vector<int> v;
    std::cin>>n;
    std::cin>>x;

    for(int i{0}; i<n; i++){
        std::cin>>t;
        v.push_back(t);
    }
    v = countFrequency(n, x, v);
    for(auto a:v){
        std::cout<<a << " ";
    }
    std::cout<<std::endl;
}