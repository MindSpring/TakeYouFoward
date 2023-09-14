#pragma once

#include <vector>
#include <algorithm>

void reverse(std::vector<int>& v, int start, int end){
    if(start>end) return;
    std::swap(v[start], v[end]);
    reverse(v, start+1, end-1);
    return ;
}

void testReverseArray()
{
    std::vector<int> v{5,7,8,1,6,3};
    int n{static_cast<int> (v.size())}; 
    reverse(v, 0, n-1);
    
    for(auto a:v){
        std::cout<<a<<", ";
    }
    std::cout<<std::endl;
}

bool recurse(std::string& s, int start, int end){
    if(start>static_cast<int>(s.length()/2)) return true;
    if(s[start] != s[end]) return false;
    
    return recurse(s, start+1, end-1);
}

void isPalindrome() {
    std::string s{"ababa"};
    recurse(s,0, static_cast<int>(s.length()-1))?std::cout<<"Palindrome":std::cout<<"Not Palindrome";
    std::cout<<std::endl;
}