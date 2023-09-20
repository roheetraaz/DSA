class Solution
{
    public:
        int minOperations(vector<int> &nums, int x)
        {
            int n = nums.size();
            vector<int> pl(n, 0);
            vector<int> pr(n, 0);
            pl[0] = nums[0];
            for (int i = 1; i < n; i++)
            {
                pl[i] = pl[i - 1] + nums[i];
            }
            pr[0] = nums[n - 1];
            for (int i = n - 2; i >= 0; i--)
            {
                pr[n - i - 1] = pr[n - i - 2] + nums[i];
            }
            int ans = INT_MAX;
            unordered_map<int, int> mpl, mpr;
            for (int i = 0; i < n; i++) mpl[pl[i]] = i + 1;
            for (int i = 0; i < n; i++) mpr[pr[i]] = i + 1;
            mpl[0] = 0;
            mpr[0] = 0;
            for (auto i: pl)
            {
                if (mpr.find(x - i) != mpr.end())
                {
                    int z = mpr[x - i] + mpl[i];
                    if (z <= n)
                    {
                        ans = min(ans, z);
                    }
                }
            }
            for (auto i: pr)
            {
                if (mpl.find(x - i) != mpl.end())
                {
                    int z = mpl[x - i] + mpr[i];
                    if (z <= n)
                    {
                        ans = min(ans, z);
                    }
                }
            }
            return ans == INT_MAX ? -1 : ans;
        }
};