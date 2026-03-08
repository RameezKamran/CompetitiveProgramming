bool cycle(int u, int p, vvi&adj, vb& vis){
    vis[u]=1;
    for(auto &v : adj[u]){
        if(!vis[v]){
            if(cycle(v,u,adj,vis)){
                return 1;
            }
        }
        else if(v != p){
            return 1;
        }
    }
    return 0;
}
