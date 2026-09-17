struct SegTree
{
    int n;
    vector<ll> tree;

    SegTree(int n)
    {
        this->n = n;
        tree.resize(4 * n);
    }

    void build(vector<ll>& a, int node, int l, int r)
    {
        if (l == r)
        {
            tree[node] = a[l];
            return;
        }

        int mid = (l + r) / 2;

        build(a, 2 * node, l, mid);
        build(a, 2 * node + 1, mid + 1, r);

        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }

    void update(int node, int l, int r, int pos, ll val)
    {
        if (l == r)
        {
            tree[node] = val;
            return;
        }

        int mid = (l + r) / 2;

        if (pos <= mid)
            update(2 * node, l, mid, pos, val);
        else
            update(2 * node + 1, mid + 1, r, pos, val);

        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }

    ll query(int node, int l, int r, int ql, int qr)
    {
        if (qr < l || r < ql)
            return 0;

        if (ql <= l && r <= qr)
            return tree[node];

        int mid = (l + r) / 2;

        return query(2 * node, l, mid, ql, qr)
             + query(2 * node + 1, mid + 1, r, ql, qr);
    }

    void build(vector<ll>& a)
    {
        build(a, 1, 0, n - 1);
    }

    void update(int pos, ll val)
    {
        update(1, 0, n - 1, pos, val);
    }

    ll query(int l, int r)
    {
        return query(1, 0, n - 1, l, r);
    }
};
