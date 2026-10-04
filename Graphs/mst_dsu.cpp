class UnionFind
{
public:
    vector<int> parent;
    vector<int> rank;
    vector<int> sz;
    UnionFind(int n)
    {
        parent.resize(n);
        iota(parent.begin(), parent.end(), 0);
        rank.resize(n);
        sz.resize(n, 1);
    }
    int find(int i)
    {
        if (i == parent[i])
        {
            return i;
        }
        return parent[i] = find(parent[i]);
    }

    void unite_rank(int i, int j)
    {
        int rootI = find(i), rootJ = find(j);
        if (rootI != rootJ)
        {
            if (rank[rootI] > rank[rootJ])
            {
                parent[rootJ] = rootI;
            }
            else if (rank[rootI] < rank[rootJ])
            {
                parent[rootI] = rootJ;
            }
            else
            {
                parent[rootI] = rootJ;
                rank[rootJ]++;
            }
        }
    }
    void unite_size(int i, int j)
    {
        i = find(i);
        j = find(j);

        if (i == j)
            return;

        if (sz[i] < sz[j])
            swap(i, j);

        parent[j] = i;
        sz[i] += sz[j];
    }
};

pair<long long, vector<Edge>> get_mst(int n, vector<Edge>& edges) {
    sort(edges.begin(), edges.end());
    DSU dsu(n);
    long long total_weight = 0;
    vector<Edge> mst_edges;

    for (const auto& e : edges) {
        if (dsu.unite(e.u, e.v)) {
            total_weight += e.w;
            mst_edges.push_back(e);
            if ((int)mst_edges.size() == n - 1) break;
        }
    }
    return {total_weight, mst_edges};
}
