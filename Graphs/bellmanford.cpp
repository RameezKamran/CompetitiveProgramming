struct Edge
{
    int u, v;
    ll w;
};

vll bellmanFord(int src, int n, vector<Edge> &edges)
{
    const ll INF = 1e18;
    vll dist(n, INF);

    dist[src] = 0;

    for(int i = 0; i < n - 1; i++)
    {
        for(auto [u, v, w] : edges)
        {
            if(dist[u] != INF &&
               dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
            }
        }
    }

    return dist;
}
