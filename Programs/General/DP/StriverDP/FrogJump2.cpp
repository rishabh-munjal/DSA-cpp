https://takeuforward.org/plus/dsa/problems/frog-jump-with-k-distances


class Solution {
   private:
        int helper(vector<int>& heights , int n , int k , int idx , vector<int>& dp){

            //base case

            if(idx == 0){
                return dp[idx] = 0;
            }
            if(idx == 1){
                return dp[idx] = 1;
            }

            if(dp[idx] != -1){
                return dp[idx];
            }

            int m = INT_MAX;


            for(int i = 1 ; i <= k ; i++){

                m = min ( m ,helper(heights , n , k , idx - i , dp) + abs(heights[idx - i ] - heights[idx]));

            }

            return dp[idx] = m;


        }
   public:
    int frogJump(vector<int>& heights, int k) {


        int n = heights.size();

        vector<int> dp(n+1 , -1);

        return helper(heights , n , k , n - 1 , dp);
    }
};


//tabulation

int frogJump(vector<int>& heights , int k){
    int n = heights.size();

    vector<int> dp(n + 1 , -1);

    dp[0] = 0;
    dp[1] = 1;

    for(int i = 0 ; i < < ; i++){
        int m = INT_MAX;

        for(int j = 1; j <= k ; j++){
            if(i - j >= 0){
                int cost = dp[i - j] + abs(height[i] - heights[i - j])
                m = min(m , cost);
            }
        }

        dp[i] = m;
    }

    return dp[n - 1];
}