#pragma once
/*
Check whether a given number "n" is a palindrome number
*/

bool reverseBits2(int n) {
    int reverse{0};
    int temp{n};
    while(temp>0){
      int digit{0};
      digit = temp % 10;
      reverse=reverse*10+digit;
      temp=temp/10;
    }
    return n==reverse;
}

void testIsPalindrome(){
    //int num {12121};
    //int num {1};
    int num {101};
    true==reverseBits2(num)?std::cout<<"Palindrome":std::cout<<"Not a Palindrome";
    std::cout<<std::endl;
}