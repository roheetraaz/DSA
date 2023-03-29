class Solution
{
    public:
        int solve(vector<int> &v, int sat_index, int index, vector<vector< int>> &dp)
        {
            if (index == v.size())
            {
                return 0;
            }
            if (dp[index][sat_index] != -1)
            {
                return dp[index][sat_index];
            }
            int choose = solve(v, sat_index + 1, index + 1,dp) + sat_index *v[index];
            int not_choose = solve(v, sat_index, index + 1,dp) + 0;
            int ans = max(choose, not_choose);
            return dp[index][sat_index] = ans;
        }
    int maxSatisfaction(vector<int> &satisfaction)
    {
        sort(satisfaction.begin(), satisfaction.end());
        int n = satisfaction.size();
        vector<vector < int>> dp(n, vector<int> (n + 1, -1));
        return solve(satisfaction, 1, 0,dp);
    }
};