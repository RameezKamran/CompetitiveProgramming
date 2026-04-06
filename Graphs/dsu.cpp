class UnionFind{
    vector<int>parent;
    vector<int>rank;
    public:
        UnionFind(int n){
            parent.resize(n);
            iota(parent.begin(), parent.end(), 0);
            rank.resize(n);
        }
        int find(int i){
            if(i == parent[i]){
                return i;
            }
            return parent[i] = find(parent[i]);
        }

        void unite(int i, int j){
            int rootI = find(i), rootJ = find(j);
            if(rootI != rootJ){
                if(rank[rootI] > rank[rootJ]){
                    parent[rootJ] = rootI;
                } 
                else if(rank[rootI] < rank[rootJ]){
                    parent[rootI] = rootJ;
                }
                else{
                    parent[rootI] = rootJ;
                    rank[rootJ]++;
                }
            }
        }
};
