/*
PSEUDOCODE
i) Create an empty Prioirt queue pq
ii) dis[v] = {inf , inf , inf}
iii) dis[s] = 0;
iv) insert all distance into pq
v) while(!pq.empty()){
        u = pq.extractMin();
        relax
      }

*/
typedef pair<int, int> pii; // (distance, node)

// Function to find the shortest paths from `src` using Dijkstra's Algorithm
vector<int> dijkstra(int V, vector<vector<pii>> &adj, int src) {
    priority_queue<pii, vector<pii>, greater<pii>> pq; // Min-heap (distance, node)
    vector<int> dist(V, INT_MAX); // Distance array, initialized to INF

    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        int u = pq.top().second; // Extract the node with the smallest distance
        int d = pq.top().first;
        pq.pop();

        if (d > dist[u]) continue; // Skip outdated pairs

        for (auto &[v, weight] : adj[u]) {
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}

int main() {
    int V = 5; // Number of vertices
    vector<vector<pii>> adj(V); // Adjacency list (0-based indexing)

    // Adding edges (u, v, weight)
    adj[0].push_back({1, 2});
    adj[0].push_back({3, 6});
    adj[1].push_back({2, 3});
    adj[1].push_back({3, 8});
    adj[1].push_back({4, 5});
    adj[2].push_back({4, 7});
    adj[3].push_back({4, 9});

    int src = 0; // Starting node
    vector<int> distances = dijkstra(V, adj, src);

    cout << "Shortest distances from node " << src << ":\n";
    for (int i = 0; i < V; i++) {
        cout << "Node " << i << " -> " << (distances[i] == INT_MAX ? -1 : distances[i]) << "\n";
    }

    return 0;
}
