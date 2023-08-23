class Solution
{
    public:
        int maximumGap(vector<int> &nums)
        {
            set<int> mp;
            for (auto i: nums) mp.insert(i);
            int prev = -1;
            int ans = INT_MIN;
            for (auto i: mp)
            {
                if (prev == -1)
                {
                    prev = i;
                }
                else
                {
                    ans = max(ans, i - prev);
                    prev = i;
                }
            }
            return ans == INT_MIN ? 0 : ans;
        }
};