int primMST(vector<int> graph[], int v) {
    int key[v], res = 0;
    bool mstSet[v];

    // Initialize key values and mstSet
    for (int i = 0; i < v; i++) {
        key[i] = INT_MAX;
        mstSet[i] = false;
    }
    key[0] = 0; // Start from the first vertex

    // Find MST for all vertices
    for (int count = 0; count < v; count++) {
        int u = -1;

        // Find the vertex with the minimum key value not in MST
        for (int i = 0; i < v; i++) {
            if (!mstSet[i] && (u == -1 || key[i] < key[u])) {
                u = i;
            }
        }

        mstSet[u] = true; // Include vertex in MST
        res += key[u];    // Add its weight to the result

        // Update key values of adjacent vertices
        for (int x = 0; x < v; x++) {
            if (graph[u][x] != 0 && !mstSet[x]) {
                key[x] = min(key[x], graph[u][x]);
            }
        }
    }

    return res; // Return the total weight of the MST
}
