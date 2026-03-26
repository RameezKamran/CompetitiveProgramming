// algo to traverse nodes in a tree, degree wise
int peel_tree(vi deg, vvi &adj,int n, int m){
    queue<int>q;
    for(int i=1; i<=n; ++i){
        if(deg[i] == 1){
            q.push(i);
        }
    }
    int rem = n;
    while(rem > 1){
        int sz = q.size();
        rem -= sz;
        while (sz--)
        {
            int u = q.front(); q.pop();
            for(auto &v : adj[u]){
                deg[v]--;
                if(deg[v] == 1){
                    q.push(v);
                }
            }
        }
    }
    int ans = q.front();
    return ans;
}
