class Solution {
private:
    int helper(vector<vector<int>>& arr, int day, int last ,vector<vector<int>> dp) {
        if (day >= arr.size()) return 0;

        int maxPoints = 0;
        
        if(dp[day][last] != -1) return dp[day][last];
        
        

        for (int i = 0; i < 3; i++) {
            if (i != last) {
                int points = arr[day][i] + helper(arr, day + 1, i , dp);
                maxPoints = max(maxPoints, points);
            }
        }

        return dp[day][last] = maxPoints;
    }

public:
    int maximumPoints(vector<vector<int>>& arr) {
        
        int n = arr.size();
        vector<vector<int>> dp(n , vector<int>(4 , 0));
        
        for (int last = 0; last < 4; last++) {
            int maxPoints = 0;
            for (int task = 0; task < 3; task++) {
                if (task != last) {
                    maxPoints = max(maxPoints, arr[0][task]);
                }
            }
            dp[0][last] = maxPoints;
        }

        // Fill the table for days 1 to n-1
        for (int day = 1; day < n; day++) {
            for (int last = 0; last < 4; last++) {
                int maxPoints = 0;
                for (int task = 0; task < 3; task++) {
                    if (task != last) {
                        int points = arr[day][task] + dp[day - 1][task];
                        maxPoints = max(maxPoints, points);
                    }
                }
                dp[day][last] = maxPoints;
            }
        }

        // Return the result: max points on last day with 'last' as 3 (no restriction)
        return dp[n - 1][3];
    }
};