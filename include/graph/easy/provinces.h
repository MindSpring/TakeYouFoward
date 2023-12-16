#pragma once
#include <bits/stdc++.h>

class Provinces{
private:
    void dfs(int node, std::vector<int> adj[], std::vector<int>& vis/*int vis[]*/){
        vis[node]=1;
        for(auto a : adj[node]){
            if(!vis[a]){
                dfs(a, adj, vis);
            }
        }
    }
public:
    int numProvinces(std::vector<std::vector<int>> adj, int v){
        std::vector<int> adjLst[v];
        
        for(int i=0; i<v; i++){
            for(int j=0; j<v; j++){
                if(adj[i][j]==1 && i!=j){
                    adjLst[i].push_back(j);
                    adjLst[j].push_back(i);
                }
            }
        }

        //int vis[v]{0};
        std::vector<int> vis(v, 0);
        int counter{0};
        for(int i=0; i<v; i++){
            if(!vis[i]){
                counter++;
                dfs(i, adjLst, vis);
            }
        }
        return counter;
    }
};

void testNumProvinces() {
    std::vector<std::vector<int>> adj{
        {1, 0, 1, 0, 0, 0},
        {0, 1, 0, 1, 0, 0},
        {1, 0, 1, 0, 0, 0},
        {0, 1, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0},        
        {0, 0, 0, 0, 0, 1}
    };
  
    Provinces ob;
    std::cout << "Number of Provinces : " << ob.numProvinces(adj,adj.size()) << endl;
}