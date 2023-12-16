#pragma once
#include <bits/stdc++.h>

std::vector<int> bfsGraph(int n, std::vector<int> adj[]){
    std::vector<int> ans;
    std::vector<int> vis(n, 0); // Initialize a dynamic-sized array
    
    std::queue<int> q;
    q.push(0);
    vis[0] = 1;

    while (!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for (auto a : adj[node]){
            if (!vis[a]){
                vis[a] = 1;
                q.push(a);
            }
        }
    }
    return ans;
}

void testBFSGraph(){
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

    for (auto a : bfsGraph(7, adj)){
        std::cout << a << ", ";
    }
}