class Solution
{
    public:
        int minSteps(int n)
        {

            if (n == 1) return 0;
            vector<int> dp(n + 1, 0);
            dp[0] = 0;
            dp[1] = 0;
            dp[2] = 2;
            for (int j = 3; j <= n; j++)
            {
                int mini = INT_MAX;
                for (int i = 1; i <= j; i++)
                {
                    if (j % i == 0)
                    {

                        mini = min((i + (j / i)), mini);
                        if (dp[j] == 0)
                        {
                            dp[j] = min((dp[i] + (j / i)), min(mini, j));
                        }
                        else
                        {
                            dp[j] = min((dp[i] + (j / i)), min(mini, min(dp[j], j)));
                        }
                    }
                }
            }

            return dp[n];
        }
};