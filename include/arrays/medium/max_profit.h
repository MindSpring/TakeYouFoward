#pragma once
#include <bits/stdc++.h>

int maximumProfit(vector<int> &prices){
    int minPrice{prices[0]};
    int maxProfit{INT_MIN};

    for(int i{0}; i<static_cast<int>(prices.size()); i++){
        minPrice = std::min(minPrice, prices[i]);
        maxProfit = std::max(maxProfit, (prices[i]-minPrice));
    }
    return maxProfit;
}

void testMaxProfit(){
    std::vector<int> p{7,1,5,3,6,4};
    std::cout<<"Max Profit : " << maximumProfit(p) << std::endl;
}