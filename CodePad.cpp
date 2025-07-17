//Graph Revision

//BFS

vector<int> bfs(vector<vector<int>>& adj , int V){

    vector<int> ans;
    vector<bool> visited(v , false);

    queue<int> q;

    q.push(0);

    while(!q.empty()){

        int u = q.top();
        q.pop();
        visited[u] = true;
        ans.push_back(u);

        for(auto v : adj[u]){

            if(visited[v] != true){
                visited[v] = true;
                q.push(v);
            }
            
        }

        return ans;
    }
}

vector<int> dfs(int src , vector<vector<int>> adj , int v){
    visited[src ] = true;
    cout<<src;

    for(auto  v: adj[src]){
        if(!visited){
            dfs(v);
        }
    }
}


//shortest path in unweighted graph

vector<int> spw(){

    vector<boo> visited(v , false);
    vector<int> dist(v , INT_MAX);

    dist[src] = 0;

    queue<int> q;
    q.push(0);

    while(!q.empty){
        int u = q.top();

        q.pop

        for(auto v : adj[v]){

            if(v is not visited){
                VISITED[V] = true;
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
       }
}

