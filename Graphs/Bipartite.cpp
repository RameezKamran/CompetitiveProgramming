bool dfs(int u, int curr, vvi &adj, vi &color){
    color[u]=curr;

    for(auto &v : adj[u]){
        if(color[v] == -1){
            if(!dfs(v,curr^1, adj, color)){
                return 0;
            }
        }
        else if(color[v] == color[u]){
            return 0;
        }
    }
    return 1;
}
