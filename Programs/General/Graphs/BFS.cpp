// Version 1

void BFS(vector<int> adj[], int V, int s)
{
    vector<bool> visited(V + 1, false);
    queue<int> q;
    visited[s] = true;
    q.push(s);

    while (!q.empty())
    {
        int u = q.front(); 
        q.pop();

        cout << u << " ";

        for (int v : adj[u])
        {
            if (!visited[v])
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

// Version 2

void BFSdis(vector<int> adj[], int V)
{
    vector<bool> visited(V + 1, false);
    for(int i = 0 ; i < v ; i++){
        if(!visited[i]){
            BFS(adj, V, i);
        }
    }
}