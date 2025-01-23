class Solution {
  public:
    vector<int> topologicalSort(vector<vector<int>>& adj) {
        //jiski dependecy kam ho vo phele(Indegree)  -> Khan Algorithm(BFS)
        
        vector<int> ans;
        queue<int> q;
        
        vector<int> inDegree(adj.size() , 0);
        for(int i = 0 ; i < adj.size() ; i++){
            vector<int> data = adj[i];
            for(auto x : data){
                inDegree[x]++;
            }
        }
        
        for(int i = 0 ; i < adj.size() ; i++){
            if(inDegree[i] == 0) {
                q.push(i);
            }
        }
        
        while(!q.empty()){
            int u = q.front();
            q.pop();
            ans.push_back(u);
            
            for(auto v : adj[u]){
                inDegree[v]--;
                if(inDegree[v] == 0){
                    q.push(v);
                }
            }
        }
        
        return ans;


        
    }
};


//DFS approach

void dfs(int node , stack<int> &st , vector<bool> &visited , vector<int> adj[]){
    visited[node] = true;

    for(auto x : adj[node]){
        if(!visited[x]){
            dfs(x , st , visited , adj);
        }
    }

    st.push(node);
}

vector<int> topoSort(int V , vector<int> adj[]){
    stack <int> st;
    vector<bool> visited(V , false);

    for(int i = 0 ; i < V ; i++){
        if(!visited[i]){
            dfs(i , st, visited , adj);
        }
    }

    return st;
}


