#pragma once

/*
You are given a number "n".
Find the number of digits of "n" that evenly devide  "n".

NOTE:
A digit evenly divides "n" if it leaves no remainder when deviding  "n".

EXAMPLE:
Input : 336
Output: 3

Input : 35
Output: 1
*/

int countDigits(int n){
	
	int x{n};
	int rem{0};
	int counter{0};

	while(x>0){
		rem=x%10;
		x=x/10;

		if(rem!=0 && 0==n%rem){
			counter++;
		}
	}	
	return counter;
}

void testCountDigits(){
    // std::cout << countDigits(373)<<std::endl;
    std::cout << countDigits(660)<<std::endl;
}