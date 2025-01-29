
class Solution
{
    private:
    
    int dfs(vector<vector<int>>& grid , int i , int j ){
        
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 0){
            return 0;
        }
        
        
        grid[i][j] = 0;
        int area = 1;
        
        
        for(auto& d : dir){
            
            int i_ = i + d.first;
            int j_ = j + d.second;
            
            area += dfs(grid , i_ , j_);
        }
        
        return area;
        
    }
    public:
    
    vector<pair<int,int>> dir = {{1 , 0} , {-1 , 0} ,{0 , 1} ,{0 , -1} ,{1 , -1} ,{1 , 1} ,{-1 , 1} ,{-1 , -1} };
    //Function to find unit area of the largest region of 1s.
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        
        int m = grid.size();
        int n = grid[0].size();
        
        int result = 0;
        
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j    < n ; j++){
                if(grid[i][j] == 1){
                    result = max(result , dfs(grid  , i , j ));
                }
            }
        }
        
        return result;
    }
};

