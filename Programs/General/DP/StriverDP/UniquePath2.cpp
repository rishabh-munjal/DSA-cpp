class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        if(grid[0][0] == 1 || grid[m - 1][n - 1] == 1){
            return 0;
        }

        vector<vector<int>> dp(m , vector<int>(n , 0));
        dp[0][0] = 1;

        for(int i = 1 ; i < n ; i++){
            if(grid[0][i] != 1){
                dp[0][i] = dp[0][i - 1];
            }
        }
        for(int i = 1 ; i < m ; i++){
            if(grid[i][0] != 1){
                dp[i][0] = dp[i - 1][0];
            }
        }

        for(int i = 1 ; i < m ; i++){
            for(int j = 1;  j < n ; j++){
                if(grid[i][j] != 1){
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                }
            }
        }

        return dp[m - 1][n - 1];


        
    }
};6