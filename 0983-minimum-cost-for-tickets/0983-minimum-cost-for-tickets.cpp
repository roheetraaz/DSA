class Solution
{
    public:
        int mincostTickets(vector<int> &d, vector<int> &cost)
        {
            vector<int> gap;
            vector<int> dp(396, 0);
            unordered_set<int> days(d.begin(), d.end());
            for (int i = 30; i < 396; i++)
            {
                dp[i] = dp[i - 1];
                if (days.find(i - 30) != days.end())
                {

                    dp[i] = min((dp[i - 1] + cost[0]), min((dp[i - 7] + cost[1]), (dp[i - 30] + cost[2])));
                }
            }
            return dp[395];
        }
};