/*
Pseudocode :- 

i) create an array dis[] of size V and initialize it with INT_MAX
ii) dis[src] = 0
iii) for i = 0 to V-1
    a) for each edge u->v
        if(dis[u] + weight < dis[v])
            dis[v] = dis[u] + weight

    b) In order to detect negative cycle, run the loop again and if any dis[v] is updated then there is a negative cycle in the graph.
        for each edge u->v
        if(dis[u] + weight < dis[v])
            print("Negative cycle detected")
*/

vector<int> bellamanFord(int V , vector<vector<int>>& edges , int src){


    vector<int> dist(V , INT_MAX);
    dist[src] = 0;


    for(int i = 0 ; i<V-1 ; i++){
        for(auto edge : edges){
            int u = edge[0];
            int v = edge[1];
            int weight = edge[2];

            if(dist[u] + weight < dist[v]){
                dist[v] = dist[u] + weight;
            }
        }
    }

    return dist;        
}