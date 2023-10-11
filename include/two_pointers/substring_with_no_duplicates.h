#pragma once
#include <bits/stdc++.h>

int uniqueSubstrings(string input)
{
    int maxLength{INT_MIN};
    int start{0};
    std::unordered_set<char> uSet;
    for(int i{0}; i<static_cast<int>(input.length()); i++){
        if(uSet.find(input[i])==uSet.end()){
            uSet.insert(input[i]); 
        }else{

            while (input[start] != input[i]) {
                uSet.erase(input[start]);
                start++;
            }
            start++;
        }
        maxLength= std::max(maxLength, i-start+1);
    }
    return maxLength;
}

void testUniqueSubstring(){

    std::string testString{"adghjkadlsgjcxy"};
    std::cout<<uniqueSubstrings(testString) << std::endl;

}