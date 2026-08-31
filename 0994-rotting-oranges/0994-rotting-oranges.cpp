class Solution {
public:

    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int min = 0;

        queue<pair<pair<int,int>,int>> Q;
        // vector<vector<bool>> vis(m,vector<bool>(n,false));
        for(int i=0; i<m; i++){
            for(int j = 0;j<n; j++){
                if(grid[i][j] == 2){
                    Q.push({{i,j}, 0});
                    // vis[i][j] = true;
                }
            }
        }
        int dr[] = {-1, 0, 1, 0};
        int dc[] = {0, 1, 0, -1};
        // if(Q.size()==0){ return -1;}
        while(Q.size()>0){
            int i = Q.front().first.first;
            int j = Q.front().first.second;
            int time = Q.front().second;
            Q.pop();

            min = max(min, time);
            // if(i-1 >=0 && !vis[i-1][j] && grid[i-1][j]==1){
            //     Q.push({{i-1,j},time+1});
            //     vis[i-1][j] = true;
            // }
            // if(j+1 < n && !vis[i][j+1] && grid[i][j+1]==1){
            //     Q.push({{i, j+1}, time+1});
            //     vis[i][j+1] = true;
            // }
            // if(i+1 < m && !vis[i+1][j] && grid[i+1][j] == 1){
            //     Q.push({{i+1,j}, time+1});
            //     vis[i+1][j] = true;
            // }
            // if(j-1 >=0 && !vis[i][j-1] && grid[i][j-1] == 1){
            //     Q.push({{i,j-1}, time+1});
            //     vis[i][j-1] = true;
            // }
            for(int k = 0; k<4;k++){
                int nr = i+dr[k];
                int nc = j+dc[k];
                if(nr>=0 && nr < m && nc >= 0 && nc < n && grid[nr][nc] == 1){
                    grid[nr][nc] = 2;
                    Q.push({{nr, nc}, time+1});
                }
            }
        }
        //check for fresh oranges
        for(int i=0; i<m;i++){
            for(int j=0;j<n;j++){
                // if(grid[i][j] == 1 && !vis[i][j]){
                //     return -1;
                // }
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }
        return min;
    }
};