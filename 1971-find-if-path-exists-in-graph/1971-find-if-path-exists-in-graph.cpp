class Solution {
public:
    // void dfsHelper(int u, vector<bool>&vis){
    //     vis[u] = true;
    //     for(int v:l[u]){
    //         if(!vis[v]){
    //             dfsHelper(v, vis);
    //         }
    //     }
    // }
    bool dfs(int n, vector<vector<int>>& adj, int src, int dest, vector<bool>& vis){
        if(src == dest) return true;
        vis[src]=true;
        for(int v:adj[src]){
            if(v==dest){
                    return true;
            }
            if(!vis[v]){
                if(dfs(n, adj, v, dest, vis)){
                    return true;
                }
            }
        }
        // for(int i=0;i<edges.size();i++){
        //     if(adj[i]==src){
        //         if(edges[i][1]==dest){
        //             return true;
        //         }
        //         else dfs(n, edges, edges[i][1], dest, vis);
        //     }
        // }
        return false;

        // dfsHelper(src, vis);
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
        return dfs(n, adj, source, destination, vis);
    }
};