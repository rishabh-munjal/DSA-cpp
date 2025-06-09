https://leetcode.com/problems/climbing-stairs/

class Solution {
private:
    // int helper(int n , int current , int& ways , vector<int>& dp){

    //     if(current > n) return 0;

    //     if(current == n){
    //         ways++;
    //         return 1;
    //     }

    //     if(dp[current] != -1 ){
    //         return dp[current];
    //     }


    //     // current += 1;
    //     // helper(n , current, ways);
    //     // current += 1;
    //     // helper(n , current , ways);


    //     return helper(n , current + 1 , ways , dp) + helper(n , current + 2 , ways , dp);

    // }
public:
    int climbStairs(int n) {

        if(n == 0 || n == 1) return 1;

        vector<int> dp(n + 1 , 0);
        dp[0] = 1;
        dp[1] = 1 ; //base case

        for(int i = 2; i <= n ; i ++){
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
        
    }
};