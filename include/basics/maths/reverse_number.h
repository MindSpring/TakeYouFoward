#pragma once
/*

The price of each ticke is equal to the number obtained 
after reversing the bits of a given 32 bits unsigned interger "n"

Input : 00000000000000000000000000000110

Output: 01100000000000000000000000000000 -> 1610612736

*/

long reverseBits(long n) {
    long reverse{0};
    while(n>0){
      int digit{0};
      digit = n % 10;
      reverse=reverse*10+digit;
      n=n/10;
    }
    return reverse;
}

void testReverseBits(){
    long num {110};
    std::cout<<reverseBits(num)<<std::endl;
}