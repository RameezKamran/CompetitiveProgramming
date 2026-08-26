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
