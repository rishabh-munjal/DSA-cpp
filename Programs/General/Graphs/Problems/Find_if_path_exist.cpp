//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    private:
    bool dfs(vector<vector<int>>&grid , int i , int j){
        //stopping condition
        
        if(grid[i][j] == 2) return true;
         grid[i][j] = 0;
        
        
        for(auto& p : dir){
            int i_ = i + p.first;
            int j_ = j + p.second;
            
            
            if(i_ >= 0 && i_ < grid.size() && j_ >= 0 && j_ < grid[0].size() && grid[i_][j_] != 0){
                if (dfs(grid, i_, j_)) {
                    return true; // Stop searching if destination is found
                }
            }
            
        }
        
        return false;
        
        
        
        
    }
    public:
    
    vector<pair<int, int>> dir{{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        for(int i  = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size() ; j++){
                if(grid[i][j] == 1){
                    return dfs(grid , i , j);
                }
            }
        }
        
        return false;
        
        
    }
};

