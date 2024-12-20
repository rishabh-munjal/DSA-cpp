/*Topological sorting for Directed Acyclic Graph (DAG) is a linear ordering of vertices such that for every directed edge u-v, vertex u comes before v in the ordering.
Note: Topological Sorting for a graph is not possible if the graph is not a DAG.*/

/*
BFS based solution -----> KAHN ALGORITHM

Pseudocode:
i) Store indegree of every vertex
ii) create a queueu q
iii) add all 0 indegree vertices to q
iv) while(!q.empty)(){
    a) pop the front element from q and print it
    b)for every adjaced v from u
        i) reduce indegree by 1
        ii) if indegree becomes 0, add it to q
    }
*/


vector<int> topologicalSortBFS(int n , vector<vector<int>>& adj){
    

    //strong indegree of every vertex
    vector<int> inDegree(n , 0);
    for(int i = 0 ; i < n ; i++){
        for(int neighbor : adj[i]){
            inDegree[neighbor]++;
        }
    }

    queue<int> q;
    //adding 0 indegree vertex to queue
    for(int i = 0 ; i < n ; i++){
        if(inDegree[i] == 0){
            q.push(i);
        }
    }

    vector<int> topo;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        topo.push_back(node);

        for(int neighbor : adj[node]){
            inDegree[neighbor]--; //reducing indegree of neighbor

            if(inDegree[neighbor] == 0){
                q.push(neighbor);
            }
        }
    }

    return topo;
}


/*
DFS based solution

presudo code:
i)Create an empty stack st
ii)for every vertex u if u is not visited DSA(U , ST)
iii)print stack


DFS(U , ST)
i) mark u as visited
ii) for every adjaced v of u if v not visited DSA(V , ST);
ii) push u to st;
*/

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited, stack<int>& st) {
    visited[node] = true;

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited, st);
        }
    }

    st.push(node);
}

vector<int> topologicalSortDFS(int n, vector<vector<int>>& adj) {
    vector<bool> visited(n, false);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(i, adj, visited, st);
        }
    }

    vector<int> topo;
    while (!st.empty()) {
        topo.push_back(st.top());
        st.pop();
    }

    return topo;
}

