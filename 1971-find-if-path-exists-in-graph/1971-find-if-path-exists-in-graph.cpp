class Solution {
public:
    bool dfs(vector<vector<int>>& adj, int src, int dest, vector<bool>& vis){
        if(src == dest) return true;
        vis[src]=true;
        for(int v:adj[src]){
            if(v==dest){
                    return true;
            }
            if(!vis[v]){
                if(dfs(adj, v, dest, vis)){
                    return true;
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<bool> vis(n, false);
        vector<vector<int>> adj(n);
        for(auto edge : edges) {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        return dfs(adj, source, destination, vis);
    }
};