class Solution
{
    public:
        int n;
        vector<int>start;
        int dp[100001];
        vector<vector < int>> v;
    int solve(int idx)
    {
        if (idx >= n) return 0;
        if (dp[idx] != -1) return dp[idx];
        int nottake = solve(idx + 1);
        int next_idx = lower_bound(start.begin(), start.end(), v[idx][1])-start.begin();
        int take = v[idx][2]+solve(next_idx);
        return dp[idx] = max(take, nottake);
    }
    int jobScheduling(vector<int> &startTime, vector<int> &endTime, vector< int > &profit)
    {
        // vector<vector < int>> v;
        n = startTime.size();
        for (int i = 0; i < n; i++)
        {
            vector<int> l = { startTime[i],
                endTime[i],
                profit[i]
            };
            v.push_back(l);
        }
        sort(startTime.begin(), startTime.end());
        start=startTime;
        sort(v.begin(), v.end());
        memset(dp,-1,sizeof(dp));
        return solve(0);
    }
};