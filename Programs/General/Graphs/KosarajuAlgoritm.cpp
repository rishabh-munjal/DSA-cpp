/*
Step1 : - order using stack
step 2 : - reverse graph
step 3: - stack dfs
*/

class Solution
{
	public:
	
	void dfsFill(int u, vector<vector<int>>& adj, vector<bool> &visited, stack<int>& st) {
	    visited[u] = true;
	    
	    for(int &v : adj[u]) {
	        
	        if(!visited[v]) {
	            dfsFill(v, adj, visited, st);
	        }
	        
	    }
	    
	    st.push(u);
	}
	
	void dfsTraverse(int u, vector<vector<int>>& adjReversed, vector<bool> &visited) {
	    visited[u] = true;
	    
	    for(int &v : adjReversed[u]) {
	        
	        if(!visited[v]) {
	            dfsTraverse(v, adjReversed, visited);
	        }
	        
	    }

	}
	
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<vector<int>>& adj) {
        
        //Step 1
        stack<int> st;
        vector<bool> visited(V, false);
        
        for(int i = 0; i<V; i++) {
            if(!visited[i]) {
                dfsFill(i, adj, visited, st);
            }
        }
        
        
        //step 2
        
        
        vector<vector<int>> adjReversed(V);
        for(int u = 0; u<V; u++) {
            for(int &v : adj[u]) {  
                
                //u->v
                //v->u
                adjReversed[v].push_back(u);
                
            }   
        }
        
        
        //Step 3
        int count = 0;
        
        visited = vector<bool>(V, false);
        while(!st.empty()) {
            int node = st.top();
            st.pop();
            if(!visited[node]) {
                dfsTraverse(node, adjReversed, visited);
                count++;
            }
        }
        
        return count;
        
    }
};

