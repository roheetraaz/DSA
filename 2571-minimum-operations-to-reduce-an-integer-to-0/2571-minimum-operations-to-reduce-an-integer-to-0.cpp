class Solution
{
    public:
        int minOperations(int n)
        {
            vector<int> dp(2*n+1, -1);
            dp[0] = 0;
            dp[1] = 1;
            for (int i = 1; i < 2 *n + 1; i = i *2)
            {
                dp[i] = 1;
            }
            for (int i = 1; i < n + 1; i++)
            {
                int x = ceil(log2(i));
                if (dp[i] != 1)
                {
                    dp[i] = min((dp[pow(2, x) - i] + dp[pow(2, x)]), (dp[i - pow(2, x - 1)] + dp[pow(2, x - 1)]));
                }
            }
            return dp[n];
        }
};