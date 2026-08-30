class Solution {
public:
    // void dfs(int i, int j, vector<vector<bool>> &vis, vector<vector<char>> &grid, int n, int m){
        
    //     if(i<0 || j<0 || i>=n || j>=m || vis[i][j] || grid[i][j]!='1'){
    //         return;
    //     }
    //     vis[i][j] = true;
    //     dfs(i-1, j, vis, grid, n, m); //top
    //     dfs(i, j+1, vis, grid, n, m); //right
    //     dfs(i+1, j, vis, grid, n, m); //botton
    //     dfs(i, j-1, vis, grid, n, m); ///left
    // }
    // int numIslands(vector<vector<char>>& grid) {
    //     int islands =0;
    //     int n = grid.size();
    //     int m = grid[0].size();

    //     vector<vector<bool>> vis(n, vector<bool>(m, false));
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<m;j++){
    //             if(grid[i][j] == '1' && !vis[i][j]){
    //                 dfs(i, j, vis, grid, n, m);
    //                 islands++;
    //             }
    //         }
    //     }
    //     return islands;
    // }
    int dr[4]={-1,0,1,0};
    int dc[4]={0,1,0,-1};

    void dfs(int r,int c,vector<vector<char>>&grid,vector<vector<int>>&visited){
        int m=grid.size();
        int n=grid[0].size();
        visited[r][c]=1;
        grid[r][c]=1;
        for(int i=0;i<4;i++){
            int nr=r+dr[i];
            int nc=c+dc[i];
            if(nr>=0&&nc>=0&&nr<m&&nc<n&&!visited[nr][nc]&&grid[nr][nc]=='1'){
                dfs(nr,nc,grid,visited);
            }
        }  
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>visited(m,vector<int>(n,0));
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n ;j++){
                if(grid[i][j]=='1'&&!visited[i][j]){
                    count++;
                    dfs(i,j,grid,visited);
                }
            }
        }
        return count;
    }
};