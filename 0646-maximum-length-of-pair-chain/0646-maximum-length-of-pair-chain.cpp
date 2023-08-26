class Solution
{
public:
    int solve(int idx, const vector<vector<int>> &offers, vector<int> &dp)
    {
        if (idx == offers.size()) return 0;
        if (dp[idx] != -1) return dp[idx];

        int notTake = solve(idx + 1, offers, dp);

        vector<int> target = {offers[idx][1], INT_MAX};  // Use INT_MAX for upper_bound
        auto low = upper_bound(offers.begin(), offers.end(), target);

        int next_idx = low - offers.begin();
        int take = 1 + solve(next_idx, offers, dp);

        return dp[idx] = max(take, notTake);
    }

    int findLongestChain(vector<vector<int>> &pairs)
    {
        sort(pairs.begin(), pairs.end());
        int m = pairs.size();

        vector<int> dp(m, -1);
        return solve(0, pairs, dp);
    }
};
