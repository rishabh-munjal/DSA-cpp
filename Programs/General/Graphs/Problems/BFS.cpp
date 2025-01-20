
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        // Code here
        
        int V = adj.size();
        int s = 0;
        
        vector<bool> visited(V + 1 , false);
        vector<int> result;
        
        queue<int> q;
        visited[s] = true;
        q.push(s);
        
        
        while(!q.empty()){
            
            int u = q.front();
            q.pop();
            
            result.push_back(u);
            
            for(int v : adj[u]){
                if(!visited[v]){
                    visited[v] = true;
                    q.push(v);
                }
            }
            
        }
        
        return result;
    }
};
