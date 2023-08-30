class Solution
{
    public:
        int rob(vector<int> &nums)
        {
            int n = nums.size();
            vector<int> dp(n + 2, 0);
            if (n <= 2)
            {
                return* max_element(nums.begin(), nums.end());
            }
            dp[0] = nums[0];
            dp[1] = nums[1];
            for (int i = 2; i < n; i++)
            {
                for (int j = 2; j <= i; j++)
                {

                    dp[i] = max(dp[i - j] + nums[i], max(dp[i - 1], dp[i]));
                }
            }
            return dp[n - 1];
        }
};