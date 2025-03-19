//* Appraoch 01 -> DFS with RECstack


bool hasCycleDFS(int node , vector<bool>& visted , vector<bool>& recStack){

    visited[node] = true;
    recStack[node] = true;

    for(int neighbour : adj[node]){
        if(!visited[neighbour]){
            if(hasCycleDFS(neighbour , visited , recStack)) return true;
        }else if(recStack[neighbour]){
            return true;
        }
    }

    recStack[node] = false;
    return false;

}

bool hasCycle(){
    vector<bool> visited(v , false);
    vectol<bool> recStack(v , false);

    for(int i = 0 ; i <v ; i++){
        if(!visted[i]){
            if(hasCycleDFS(i , visted , recStack)) return true;
        }
    }


    return false;
}



//* Approach 02 -> Khan Algo


//! if we can write the topo sort of DAG then its not a cycle and if we cant its a cycle

//? the key idea is to maiaintain a count with topo sort if count != v thenb cycle exists








