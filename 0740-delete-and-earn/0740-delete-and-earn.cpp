class Solution
{
    public:
        vector<int> freq;
    int n;
    int maxi;
    int dp[10001];
    int  solve(int ele)
    {
        if (ele > maxi) return 0;
        if(dp[ele]!=-1)return dp[ele];
        int take = solve(ele + 2) + freq[ele] * ele;
        int not_take = solve(ele + 1);
        return dp[ele]=max(take, not_take);
    }

    int deleteAndEarn(vector<int> &nums)
    {
        freq.assign(10001, 0);

        maxi = INT_MIN;
        memset(dp,-1,sizeof(dp));
        // int mini=INT_MAX;
        for (auto i: nums)
        {
            freq[i]++;
            maxi = max(maxi, i);
        }
        return solve(0);
    }
};