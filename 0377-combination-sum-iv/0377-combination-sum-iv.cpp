class Solution
{
    public:
        int dp[1001];
    int n;
    vector<int> nums;

    int solve(int target)

    {
        if (target < 0) return 0;

        if (target == 0) return 1;
        int ans = 0;
        if (dp[target] != -1) return dp[target];

        for (int j = 0; j < n; j++)
        {
            ans = ans + solve(target - nums[j]);
        }

        dp[target] = ans;
        return ans;
        
    }
    int combinationSum4(vector<int> &num, int target)
    {
        memset(dp, -1, sizeof(dp));
        nums = num;
        n = nums.size();
        solve(target);
        return dp[target];
    }
};