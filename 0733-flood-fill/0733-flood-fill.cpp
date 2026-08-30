class Solution {
public:
    void dfs(vector<vector<int>> &image, int r, int c, int originalColor, int color){
        if( r<0 || c<0 || r>=image.size() || c>=image[0].size() ){
            return;
        }
        if(image[r][c]!=originalColor || image[r][c]==color) return; 
        
        else{
            image[r][c] = color;
        }
        dfs(image, r-1, c, originalColor, color);
        dfs(image, r, c+1, originalColor, color);
        dfs(image, r+1, c, originalColor, color);
        dfs(image, r, c-1, originalColor, color);
 
        return;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int originalColor= image[sr][sc];
        dfs(image, sr, sc, originalColor, color);
        return image;
    }
};