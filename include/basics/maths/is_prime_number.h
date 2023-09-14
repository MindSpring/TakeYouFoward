#pragma once
bool isPrime(int n)
{
	if(n==1){
		return false;
	}

	for(int i{2}; i<std::sqrt(n); i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

void testIsPrime(){
    std::cout<<isPrime(13)<<std::endl;
}