#pragma once
#include <bits/stdc++.h>


std::vector<int>** graphList(int n, int m){

    std::vector<int> graph[n+1];
    for(int i=0; i<m; i++){
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    return graph;
}

void testGraphList(){
    int n, m;
    std::cin>> n >> m ;
    std::vector<int> graph[n+1];
    graph = graphList(n, m);

    for(auto a: graph){
        //std::cout<<a << ", ";
    }
}