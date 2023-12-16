#pragma once
#include <bits/stdc++.h>

void dfs(int node, std::vector<int> adj[], std::vector<int>& vis /*int vis[]*/, std::vector<int>& ls){
    vis[node]=1;
    ls.push_back(node);
    for(auto a:adj[node]){
        if(!vis[a]){
            dfs(a, adj, vis, ls);
        }
    }
}

std::vector<int> dfsGraph(int n, std::vector<int> adj[]){
    std::vector<int> df;
    //int vis[n]{0};
    std::vector<int> vis(n, 0);
    int start = 0;
    dfs(start, adj, vis, df);
    return df;
}

void testDFSGraph(){
    std::vector<int> adj[7];
    adj[0].push_back(1);
    adj[0].push_back(4);
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(2);
    adj[2].push_back(4);
    adj[4].push_back(2);
    adj[3].push_back(5);
    adj[5].push_back(3);
    adj[4].push_back(5);
    adj[4].push_back(0);
    adj[5].push_back(4);

    for (auto a : dfsGraph(7, adj)){
        std::cout << a << ", ";
    }
}