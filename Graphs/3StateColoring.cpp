bool dfs(int u, vvi &adj, vi &vis){
    vis[u]=1; //in-stack
            //vis[u]==0 : unvis
    for(auto &v : adj[u]){

        if(!vis[v]){
            if(dfs(v,adj,vis)){
                return 1;
            }
        }
        else if(vis[v] == 1){
            return 1;
        }
    }
    vis[u] = 2; // visited
    return 0;
}
