// Recursive Solution

class Solution
{
private:
    bool isPossible(vector<int> &arr, int sum, int curr, int idx)
    {

        if (curr == sum)
            return true;

        if (curr > sum)
            return false;

        if (idx >= arr.size() && curr != sum)
            return false;

        // take

        // take
        if (isPossible(arr, sum, curr + arr[idx], idx + 1))
            return true;

        // don't take
        if (isPossible(arr, sum, curr, idx + 1))
            return true;

        return false;
    }

public:
    bool isSubsetSum(vector<int> &arr, int sum)
    {
        // code here

        if (isPossible(arr, sum, 0, 0))
        {
            return true;
        }

        return false;
    }
};

// Memomized

class Solution
{
private:
    vector<vector<int>> dp;

    //-1 >  not computed
    // 0 -> flase
    // 1-> true
    bool isPossible(vector<int> &arr, int sum, int curr, int idx)
    {

        if (curr == sum)
            return true;

        if (curr > sum)
            return false;

        if (idx >= arr.size() && curr != sum)
            return false;

        if (dp[idx][curr] != -1)
            return dp[idx][curr];
        // take

        // take
        if (isPossible(arr, sum, curr + arr[idx], idx + 1))
            return dp[idx][curr] = 1;

        // don't take
        if (isPossible(arr, sum, curr, idx + 1))
            return dp[idx][curr] = 1;

        return dp[idx][curr] = 0;
    }

public:
    bool isSubsetSum(vector<int> &arr, int sum)
    {
        // code here

        int n = arr.size();
        dp = vector<vector<int>>(n, vector<int>(sum + 1, -1));

        return isPossible(arr, sum, 0, 0);
    }
};

// Tabulation

class Solution
{
public:
    bool isSubsetSum(vector<int> &arr, int sum)
    {
        int n = arr.size();
        vector<vector<bool>> dp(n, vector<bool>(sum + 1, false));

        // Base case: sum 0 is always possible (take nothing)
        for (int i = 0; i < n; i++)
            dp[i][0] = true;

        // Base case: Only one element (arr[0])
        if (arr[0] <= sum)
            dp[0][arr[0]] = true;

        // Fill the table
        for (int i = 1; i < n; i++)
        {
            for (int t = 1; t <= sum; t++)
            {
                bool notTake = dp[i - 1][t];
                bool take = false;
                if (arr[i] <= t)
                    take = dp[i - 1][t - arr[i]];

                dp[i][t] = take || notTake;
            }
        }

        return dp[n - 1][sum];
    }
};
