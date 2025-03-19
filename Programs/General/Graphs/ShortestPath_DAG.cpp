/*

The idea is to use Topological soritng

Pseucode:
i) initialize dist[v] = {INt_MAX} for all v
ii) dist[s] = 0;
iii) Find the toplocial sort
iv ) for every vertex u  in the topological sort
            for every adjavetn v of u
                if dist[v] > dist[u] + weight[u ,v]
                    dist[v] = dist[u] + weight[u,v]
*/

#include <bits/stdc++.h>
using namespace std;

void shortestPathDAG(int n, vector<pair<int, int>> adj[], int src) {
    vector<int> inDegree(n, 0);
    vector<int> topoOrder;
    queue<int> q;

    // Calculate in-degree of each node
    for (int u = 0; u < n; u++) {
        for (auto &[v, wt] : adj[u]) {
            inDegree[v]++;
        }
    }

    // Push nodes with in-degree 0 into the queue
    for (int i = 0; i < n; i++) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }

    // Topological Sorting using BFS (Kahn’s Algorithm)
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        topoOrder.push_back(u);
        
        for (auto &[v, wt] : adj[u]) {
            if (--inDegree[v] == 0) {
                q.push(v);
            }
        }
    }

    // Step 2: Find Shortest Path using Topological Order
    vector<int> dist(n, INT_MAX);
    dist[src] = 0;  // Source distance is 0

    for (int u : topoOrder) {
        if (dist[u] != INT_MAX) {
            for (auto &[v, wt] : adj[u]) {
                if (dist[u] + wt < dist[v]) {
                    dist[v] = dist[u] + wt;
                }
            }
        }
    }

    // Print the shortest distances
    cout << "Shortest distances from source " << src << ":\n";
    for (int i = 0; i < n; i++) {
        if (dist[i] == INT_MAX) {
            cout << "Node " << i << ": INF\n";
        } else {
            cout << "Node " << i << ": " << dist[i] << "\n";
        }
    }
}

int main() {
    int n = 6; // Number of nodes
    vector<pair<int, int>> adj[n];

    // Graph edges (u → v, weight)
    adj[0].push_back({1, 5});
    adj[0].push_back({2, 3});
    adj[1].push_back({3, 6});
    adj[1].push_back({2, 2});
    adj[2].push_back({4, 4});
    adj[2].push_back({5, 2});
    adj[2].push_back({3, 7});
    adj[3].push_back({4, -1});
    adj[4].push_back({5, -2});

    int src = 1;  // Source node
    shortestPathDAG(n, adj, src);

    return 0;
}

