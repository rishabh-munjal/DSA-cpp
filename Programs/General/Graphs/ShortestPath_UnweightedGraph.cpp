#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

// Function to find the shortest path in an unweighted graph
void shortestPath(vector<vector<int>> &adj, int source, int n) {
    vector<int> distance(n, INT_MAX); // Initialize distances to infinity
    queue<int> q;

    // Starting point
    distance[source] = 0;
    q.push(source);

    // BFS loop
    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : adj[node]) {
            if (distance[neighbor] == INT_MAX) { // If the neighbor hasn't been visited
                distance[neighbor] = distance[node] + 1;
                q.push(neighbor);
            }
        }
    }

    // Print the shortest distances
    cout << "Shortest distances from node " << source << ":\n";
    for (int i = 0; i < n; ++i) {
        if (distance[i] == INT_MAX)
            cout << "Node " << i << ": Not reachable" << endl;
        else
            cout << "Node " << i << ": " << distance[i] << endl;
    }
}

int main() {
    int n, m;
    cout << "Enter the number of nodes and edges: ";
    cin >> n >> m;

    vector<vector<int>> adj(n);

    cout << "Enter the edges (u v):\n";
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // Comment this line if the graph is directed
    }

    int source;
    cout << "Enter the source node: ";
    cin >> source;

    shortestPath(adj, source, n);

    return 0;
}
