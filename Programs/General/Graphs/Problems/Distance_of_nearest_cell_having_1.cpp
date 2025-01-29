// Problem Link: https://practice.geeksforgeeks.org/problems/distance-of-nearest-cell-having-1-1587115620/1
class Solution {
  public:
    // Function to find distance of nearest 1 in the grid for each cell.
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        // BFS on each 1
        
        vector<pair<int,int>> dir = {{1,0} , {-1 , 0} , {0 , 1} , {0 , -1}};
        
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<int>> res(m , vector<int>( n , -1));
        queue<pair<int,int>> q; 
        
        //adding 1 to the queue -> JISKE NEAREST NIKALNA HO VO DALO
        
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(grid[i][j] == 1){
                    
                    res[i][j] = 0;
                    q.push({i,j});
                }
                
            }
                
        }
        
        //PERFORMING THE BFS
        
        while (!q.empty()) {
            
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            
            for (auto d : dir) {
                int i_ = i + d.first;
                int j_ = j + d.second;
                
                // Validating cell and checking if not already visited
                if (i_ >= 0 && i_ < m && j_ >= 0 && j_ < n && res[i_][j_] == -1) {
                    res[i_][j_] = res[i][j] + 1;
                    q.push({i_, j_});
                }
            }
        }
        
        
        return res;
        
        
    }
};

