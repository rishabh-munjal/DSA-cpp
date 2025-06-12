class Solution {
private:
    vector<pair<int, int>> dir = {{0, 1}, {1, 0}}; 

    int helper(int m, int n, int i, int j , vector<vector<int>>& dp) {
        
        if (i == m - 1 && j == n - 1) return 1;
        if (i >= m || j >= n) return 0;

        if(dp[i][j] != -1) return dp[i][j];

        

        int totalWays = 0;

        for (auto& d : dir) {
            int next_i = i + d.first;
            int next_j = j + d.second;

            totalWays += helper(m, n, next_i, next_j , dp);
        }

        return dp[i][j] = totalWays;
    }

public:
    int uniquePaths(int m, int n) {

        vector<vector<int>> dp(m , vector<int>(n , -1));

        return helper(m, n, 0, 0 , dp);
    }
};
