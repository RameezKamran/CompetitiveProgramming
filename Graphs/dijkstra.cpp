vll dijkstra(int src, vector<vector<pair<int,int>>> &adj)
{
    int n = adj.size();
    const ll INF = 1e18;

    vll dist(n, INF);

    priority_queue<
        pair<ll,int>,
        vector<pair<ll,int>>,
        greater<pair<ll,int>>
    > pq;

    dist[src] = 0;
    pq.push({0, src});

    while(!pq.empty())
    {
        auto [cost, u] = pq.top();
        pq.pop();

        if(cost > dist[u])
            continue;

        for(auto [v, w] : adj[u])
        {
            if(dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}
