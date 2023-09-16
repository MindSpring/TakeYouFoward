#pragma once
#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> getFrequencies(std::vector<int>& v) {
    std::vector<int> result(2);
    std::unordered_map<int, int> uom;
    int n = static_cast<int>(v.size());

    for(int i{0}; i<n; i++){
        uom[v[i]]++;
    }

    int highest{INT16_MIN};
    int highestElement{INT16_MIN};
    int lowest{INT16_MAX};
    int lowestElement{INT16_MAX};

    for(auto a: uom){
        int count{a.second};
        int element{a.first};

        if(highest<count){
            highest=count;
            highestElement = element;
        }
        else if(highest==count){
            highestElement = std::min(highestElement, element);
        }
        result[0]=highestElement;

        if(lowest>count){
            lowest=count;
            lowestElement = element;
        }
        else if(lowest==count){
            lowestElement = std::min(lowestElement, element);
        }
        result[1]=lowestElement;
    }
    return result;
}

void testGetFrequencies(){
    std::vector<int> v{1,2,3,1,1,4};
    v = getFrequencies(v);
    for(auto a : v){
        std::cout<<"---> "<< a << std::endl;
    }
}