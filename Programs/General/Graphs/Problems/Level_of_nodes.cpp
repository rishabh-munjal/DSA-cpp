int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // BFS with level tracking
	    vector<bool> visited(V, false);
	    queue<pair<int, int>> q; // Pair: {node, level}
	    
	    visited[0] = true; // Assuming BFS starts from node 0
	    q.push({0, 0});
	    
	    while (!q.empty()) {
	        int u = q.front().first;
	        int level = q.front().second;
	        q.pop();
	        
	        if (u == X) {
	            return level;
	        }
	        
	        for (int v : adj[u]) {
	            if (!visited[v]) {
	                visited[v] = true;
	                q.push({v, level + 1});
	            }
	        }
	    }
	    
	    return -1; // Node X not found
	}