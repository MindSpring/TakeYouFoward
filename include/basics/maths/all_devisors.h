#pragma once

int sumOfAllDivisors(int n){
	
	int temp{n};
	int sumOfDevisor{0};

	for(int j{temp}; j>0; j--){
		for(int i{1}; i<=std::sqrt(j); i++){
			if(j%i == 0){
				sumOfDevisor += i;
				if(j/i!=i){
					sumOfDevisor += (j/i);
				}
			}
		}	
	}
	return sumOfDevisor;
}

void testSumOfAllDivisors(){
    std::cout<<sumOfAllDivisors(5)<<std::endl;
}