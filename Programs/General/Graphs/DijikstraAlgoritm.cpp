/*
PSEUDOCODE
i) Create an empty Prioirt queue pq
ii) dis[v] = {inf , inf , inf}
iii) dis[s] = 0;
iv) insert all distance into pq
v) while(!pq.empty()){
        u = pq.extractMin();
        relax
      }

*/

vector<int> dikstra(vector<int> graph[] , int V , int src){
    vector<int> dis(V , INT_MAX);
    dis[src] = 0;

    vector<bool> fin(V , false); //finalized

    for(int count = 0 ; count < v-1 ; count++){
        int u = - 1;
        for(int i = 0 ; i < v ; i++){
            if(!fin[i] && (u == - 1 || dis[i] < dis[u])){
                u = i;
            }

            fin[i] = true;

            for(int v = 0 ; v< V ; v++){
                if(graph[u][v] != 0 && fin[v] == false){
                    dis[v] = min(dis[v] , dis[u] + graph[u][v])
                }
            }
        }

        return dis;
    }
}