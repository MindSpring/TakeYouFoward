#pragma once
std::vector<long long> factorialNumbers(long long n) {

    std::vector<long long> ans; 
    long long fact = 1; 
    for(int i=1; fact*i <=n; i++)
    {
        fact=fact*i;
        ans.push_back(fact);
    }
    return ans; 
}

void testFactorialNumbers(){
    std::vector<long long> v = factorialNumbers(7);
    for(auto a : v){
        std::cout<<a <<" ";
    }
    std::cout<<std::endl;

}