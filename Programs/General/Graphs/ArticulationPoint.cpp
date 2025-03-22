// tin = time of inseriton
            //low =- min time of iunsertion of adjacent nodes except parent and visirted nodes

void dfs(int node , int parent , vector<bool>& visited , vector<int> adj[] , int tin[] , int low[] , vector<int>& result){

    static int timer = 0;
    visited[node] = true;
    tin[node] = low[node] = timer++;
    int children = 0;

    for(auto it : adj[node]){
        if(it == parent) continue;
        if(!visited[it]){
            children++;
            dfs(it , node , visited , adj , tin , low , result);
            low[node] = min(low[node] , low[it]);
            if(low[it] >= tin[node]){   // ! change in this line
                result.push_back(node);
            }
        }else{
            low[node] = min(low[node] , tin[it]);
        }
    }

    if(parent == -1 && children > 1){
        result.push_back(node);
    }
}


vector<int> articulationPoints(int n , vector<int>adj[]){


    vector<bool> visited(n , false);
    int tin[n] , low[n];
    vector<int> result;


    for(int i = 0 ; i < n ; i++){
        if(!visited[i]){
            dfs(i , -1 , visited , adj , tin , low , result);
        }
    }

    return result;
}