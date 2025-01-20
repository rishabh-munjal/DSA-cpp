class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        vector<vector<int>> adj(V);
        for (int i = 0; i < edges.size(); i++) {
            int node1 = edges[i].first;
            int node2 = edges[i].second;
            adj[node1].push_back(node2);
            adj[node2].push_back(node1);
        }
        return adj;
    }
};

