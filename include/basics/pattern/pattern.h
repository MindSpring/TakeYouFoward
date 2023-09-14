#pragma once
#include <iostream>

void pattern1(int N){
    for(int i{0}; i< N; i++){
        for(int j{0}; j<N; j++){
            std::cout<< "*";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}


void pattern2(int N){
    for(int i{0}; i< N; i++){
        for(int j{0}; j<=i; j++){
            std::cout<< "*";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

void pattern3(int N){
    for(int i{1}; i<=N; i++){
        for(int j{1}; j<=i; j++){
            std::cout<< j;
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

void pattern4(int N){
    for(int i{1}; i<=N; i++){
        for(int j{1}; j<=i; j++){
            std::cout<< i;
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

void pattern5(int N){
    for(int i{0}; i<N; i++){
        for(int j{N-i}; 0<j; j--){
            std::cout<< "*";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

void pattern6(int N){
    for(int i{0}; i<N; i++){
        for(int j{1}; j<=N-i; j++){
            std::cout<< j;
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

void pattern7(int N){
    for(int i{0}; i<N; i++){
        for(int a{0}; a<(N-i); a++){
            std::cout<<" ";
        }
        for(int b{0}; b<(i*2-1); b++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

void pattern8(int N){
    for(int i{N}; 0<i; i--){
        for(int a{0}; a<(N-i); a++){
            std::cout<<" ";
        }
        for(int b{0}; b<(i*2-1); b++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

void pattern9(int N){

    for(int i{0}; i<N; i++){
        for(int a{0}; a<(N-i); a++){
            std::cout<<" ";
        }
        for(int b{0}; b<(i*2-1); b++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }

    for(int i{N}; 0<i; i--){
        for(int a{0}; a<(N-i); a++){
            std::cout<<" ";
        }
        for(int b{0}; b<(i*2-1); b++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

void pattern10(int N){
    for(int i{0}; i<=(N*2-1); i++){
        int stars = i;
        if(i>N){
            stars = 2*N-i;
        }
        for(int j{1}; (j<=stars); j++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

void pattern11(int N){
    for(int i{0}; i<N; i++){

        int start{0};
        if(i%2==0){
            start=0;
        }else{
            start=1;
        }

        for(int j{0}; j<i; j++){
            std::cout<<start;
            start=1-start;
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

void testPatterns(){
        pattern11(5);
    // pattern10(5);
    // pattern9(5);
    // pattern8(5);
    // pattern7(5);
    // pattern6(5);
    // pattern5(5);
    // pattern4(5);
    // pattern3(5);
    // pattern2(5);
    // pattern1(5);
}