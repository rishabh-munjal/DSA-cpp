class Solution {
private:
    // int helper(vector<int>& nums , int n , int idx , vector<int>& dp){
        
    //     if(idx >= n){
    //         return dp[idx] = 0;
    //     }

    //     if(dp[idx] != -1) return dp[idx];

    //     int pick = helper(nums , n , idx + 2 ,dp) + nums[idx];
    //     int notpick = helper(nums , n , idx + 1 ,dp );


    //     return dp[idx] = max(pick , notpick);
    // }
public:
    int rob(vector<int>& nums) {

        int n = nums.size();
        vector<int> dp(n , -1);

        dp[0] = nums[0];

        for(int i = 1 ; i < n ; i++){

            int take = nums[i] + ((i - 2 >= 0) ? dp[i - 2] : 0) ;
            int notake = dp[i - 1];

            dp[i] = max(take , notake);

        }

        //return helper(nums , n , 0 , dp);

        return dp[n - 1];

        

    }
};