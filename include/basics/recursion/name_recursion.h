#pragma once
#include <iostream>
#include <vector>
#include <string>

void fun(std::vector<std::string>& v, int n){
	if(n==0) return ;
	v.push_back("Coding Ninjas");
	fun(v, n-1);
}

void testNameRecursion() {
    int n{10};
	std::vector<std::string> v;
	fun(v, n);
	for(auto a: v){
        std::cout<<a<<", ";
    }
    std::cout<<std::endl;
}