class Solution
{
    public:
        int numSquares(int n)
        {
            int x = ceil(sqrt(n));
            vector<int> dp(n + 1, INT_MAX - 2);
            dp[0] = 0;
            dp[1] = 1;

            for (int i = 2; i <= n; i++)
            {
               	// int ans=0;
                for (int j = 0; j * j <= i; j++)
                {
                    dp[i] = min(((dp[i - j *j]) + 1), dp[i]);
                }
            }
            return dp[n];
        }
};