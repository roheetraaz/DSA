class Solution
{
    public:
        int mod = 1e9 + 7;
    int peopleAwareOfSecret(int n, int delay, int forget)
    {
        vector<int> dp(n + 1, 1);
        dp[0] = 0;

        for (int i = delay+1; i < n + 1; i++)
        {
            for (int j = delay; j < forget; j++)
            {
                dp[i] = (dp[i] + (dp[max(i - j, 0)])) % mod;
            }
            // cout << dp[i] << " ";
        }

        return (dp[n] - dp[n - forget]+mod) % mod;
    }
};