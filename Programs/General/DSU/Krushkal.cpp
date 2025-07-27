class DisjointSet {
    vector<int> parent, size;

public:
    DisjointSet(int n) {
        parent.resize(n + 1);
        size.resize(n + 1, 1); // Every node is initially its own component with size 1

        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    int findPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findPar(parent[node]); // Path compression
    }

    void unionBySize(int u, int v) {
        int ulp_u = findPar(u);
        int ulp_v = findPar(v);

        if (ulp_u == ulp_v) return;

        // Attach smaller size tree under larger size tree
        if (size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        } else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};


int mst(int V , vector<vector<int>> adj){
    vector<pair<int , pair<int , int>>> edges;


    for(int i = 0 ; i < V ;i++){
        for(auto it : adj[i]){
            int u = i;
            int v = it.first;
            int wt.second;


            edges.push_back({wt , {u , v}});
        }
    }


    //soritng to attaing the minimum in MST

    sort(edges.begin() , edges.end());


    int mst = 0;
    DisjointSet ds(V);

    for(auto e : edges){
        int wt = e.first;
        int u = e.second.first;
        int v = e.second.second;

        if(ds.findPar[u] != ds.findPar[v]){
            mst += wt;

            ds.unionBySize(u , v);
        }
    }

    return mst;

}    