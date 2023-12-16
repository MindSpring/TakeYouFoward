#pragma once
#include <bits/stdc++.h>
#include "node.h"

class Cycle{
private:
    bool detect(int src, std::vector<int> adj[], int visit[]){
        std::queue<std::pair<int, int>> q;
        q.push({src, -1});
        visit[src]=1;
        while(!q.empty()){
            int node{q.front().first};
            int parent{q.front().second};
            q.pop();
            for(auto a: adj[node]){
                if(!visit[a]){
                    visit[a]=1;
                    q.push({a, node});
                }
                else if(a!=parent){
                    return true;
                }
            }
        }
        return false;
    }
public:
    bool detectCycle(std::vector<int> adj[], int v){
        int visit[v]{0};
        for(int i{0}; i<v; i++){
            if(!visit[i]){
                if(detect(i, adj, visit)) return true;
            }
        }
        return false;
    }
};

int testCycleGraph() {
    
    // V = 4, E = 2
    std::vector<int> adj[4] = {{}, {1,2}, {1, 3}, {2,3}};
    Cycle obj;
    bool ans = obj.detectCycle(adj, 4);
    if (ans)
        std::cout << "Graph has a cycle"<<std::endl;
    else
        std::cout << "Graph has no cycle"<<std::endl;
    return 0;
}