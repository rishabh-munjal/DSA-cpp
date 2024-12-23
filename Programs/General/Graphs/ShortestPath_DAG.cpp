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



using namespace std;

// Perform DFS to find topological order
void topologicalSortDFS(int node, vector<vector<pair<int, int>>>& adj, vector<bool>& visited, stack<int>& st) {
    visited[node] = true;
    for (auto& neighbor : adj[node]) {
        int nextNode = neighbor.first;
        if (!visited[nextNode]) {
            topologicalSortDFS(nextNode, adj, visited, st);
        }
    }
    st.push(node);
}

// Shortest Path in a DAG
vector<int> shortestPathDAG(int n, vector<vector<pair<int, int>>>& adj, int start) {
    // Step i: Initialize distances
    vector<int> dist(n, INT_MAX);

    // Step ii: Set the start node's distance to 0
    dist[start] = 0;

    // Step iii: Find the topological sort
    stack<int> st;
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            topologicalSortDFS(i, adj, visited, st);
        }
    }

    // Step iv: Process each vertex in topological order
    while (!st.empty()) {
        int u = st.top();
        st.pop();

        if (dist[u] != INT_MAX) { // Only proceed if the node is reachable
            for (auto& neighbor : adj[u]) {
                int v = neighbor.first;
                int weight = neighbor.second;
                if (dist[v] > dist[u] + weight) {
                    dist[v] = dist[u] + weight;
                }
            }
        }
    }

    return dist;
}

