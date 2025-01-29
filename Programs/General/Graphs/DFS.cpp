//Version 01 -> Undirected connectd with source

void DFS(vector<int> adj , int V, int s){
    vector<bool> visited(V, false);

    for(int  i = 0 ; i < V ; i++){
        if(!visited[i]){
            DFSrec(adj , i , visited);
        }
    }
}

void DFSrec(vector<int> adj , int s , vector<boo>& visited){
    visited[s] = true;
    cout<<s<<" ";

    for(int u : adj[s]){
        if(!visited[u]){
            DFSrec(adj , u , visited);
        }
    }
}

//Version 02 -> Disconnected Graph without source

  q