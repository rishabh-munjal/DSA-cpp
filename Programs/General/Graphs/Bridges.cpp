class Solution {
    private:
        int timer = 1;
    
        void dfs(int node, int parent, vector<bool>& visited, vector<vector<int>>& adj, vector<int>& tin, vector<int>& low, vector<vector<int>>& result) {
    
            visited[node] = true;
    
            tin[node] = timer;
            low[node] = timer;
    
            timer++;
            
            for (int neighbor : adj[node]) {
                
                if (neighbor == parent) continue;
    
                if (!visited[neighbor]) {
    
                    dfs(neighbor, node, visited, adj, tin, low, result);
                    low[node] = min(low[node], low[neighbor]);
    
                    if (tin[node] < low[neighbour]) {   // lowest posibhle time to reah neighbout is > ndoe ie brige 
    
                        result.push_back({node, neighbor}); 
    
                    }
                } else {
    
                    low[node] = min(low[node], tin[neighbor]);
                }
            }
        }
    
    public:
        vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
            vector<vector<int>> adj(n);
            
            for (auto& connection : connections) {
    
                adj[connection[0]].push_back(connection[1]); 
    
                adj[connection[1]].push_back(connection[0]);
            }
    
            vector<bool> visited(n, false);
    
            vector<int> tin(n, -1), low(n, -1);  // tin = time of inseriton
            //low =- min time of iunsertion of adjacent nodes except parent
            vector<vector<int>> result;
    
            for (int i = 0; i < n; i++) { 
                
                if (!visited[i]) { 
    
                    dfs(i, -1, visited, adj, tin, low, result);
                }
            }
    
            return result;
        }
    };
    