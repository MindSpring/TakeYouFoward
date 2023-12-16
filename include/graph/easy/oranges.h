#pragma once
#include <bits/stdc++.h>

class Oranges{
public:
    int orangeRotting(std::vector<std::vector<int>>& grid){
        if(grid.empty()) return 0;
        int rows{static_cast<int>(grid.size())};
        int cols{static_cast<int>(grid[0].size())};
        int counter{0};
        int days{0};
        int total{0};
        std::queue<std::pair<int, int>> rotten;

        for(int i{0}; i<rows; i++){
            for(int j{0}; j<cols; j++){
                if(grid[i][j]!=0) total++;
                if(grid[i][j]==2) rotten.push({i, j});
            }
        }

        int dRow[4]{0, 0, -1, 1};
        int dCol[4]{-1, 1, 0, 0};

        while(!rotten.empty()){
            int k = rotten.size();
            counter += k;
            
            while(k--){
                int x = rotten.front().first;
                int y = rotten.front().second;
                rotten.pop();

                for(int i{0}; i<4; i++){
                    int nx = x + dRow[i];
                    int ny = y + dCol[i];
                    if(nx<0 || ny<0 || nx >= rows || ny >= cols || grid[nx][ny]!=1) continue;
                    grid[nx][ny]=2;
                    rotten.push({nx, ny});
                }
            }
            if(!rotten.empty()) days++;
        }
        return total==counter? days : -1;
    }
};

void testOrangeRotting() {
    std::vector<std::vector<int>> v{
        {2, 1, 1},
        {1, 1, 0},
        {0, 1, 1}
    };
  
    Oranges ob;
    std::cout << "Number of days : " << ob.orangeRotting(v) << endl;
}