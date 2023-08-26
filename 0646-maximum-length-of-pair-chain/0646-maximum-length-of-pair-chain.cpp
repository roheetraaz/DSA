class Solution
{
    public:
        int solve(int idx, const vector<vector < int>> &offers, vector< int > &dp)
        {
            if (idx == offers.size()) return 0;
            if (dp[idx] != -1) return dp[idx];

            int notTake = solve(idx + 1, offers, dp);
            vector<int>v={offers[idx][1],1001 };
           	// Use INT_MAX for upper_bound and Pass vector
            int next_idx = upper_bound(offers.begin(), offers.end(),v)-offers.begin();

            int take = 1 + solve(next_idx, offers, dp);

            return dp[idx] = max(take, notTake);
        }

    int findLongestChain(vector<vector < int>> &pairs)
    {
        sort(pairs.begin(), pairs.end());
        int m = pairs.size();

        vector<int> dp(m, -1);
        return solve(0, pairs, dp);
    }
};