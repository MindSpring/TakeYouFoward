#pragma once

/*
Return true if the number is an amstrong number

Input : N= 1634 ------> the number of digits in the given number n = 4
if (1^4 + 6^4 + 3^4 + 4^4) == N
Then 

Output: true;
*/
#include <cmath>

bool isArmstrong(int n){
	int temp{n};
	int digit{0};
	int result{0};
	int count{0};

	while(temp>0){
		temp /=10;
		count++;
	}

	temp=n;
	
	while(temp>0){
		digit=temp%10;
		result += std::pow(digit, count);
		temp /= 10;
	}
	return n==result;
}


void testIsArmstrong(){
    std::cout<<isArmstrong(1634)<<std::endl;
}
