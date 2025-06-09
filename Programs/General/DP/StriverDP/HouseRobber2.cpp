class Solution {

private:
    int help(vector<int> nums){
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
public:
    int rob(vector<int>& nums) {

        if(nums.size() == 1){
            return nums[0];
        }

        vector<int> c1 , c2;

        for(int i = 0 ; i < nums.size() ; i++){
            if(i != 0){

                c1.push_back(nums[i]);

            }

            if(i != nums.size() - 1){
                c2.push_back(nums[i]);
            }
        }

        int mc1 = help(c1);
        int mc2 = help(c2);

        return max(mc1 , mc2);

        

    }
};