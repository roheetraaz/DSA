class Solution
{
    public:
        int maximumGap(vector<int> &nums)
        {
            map<int, int> mp;
            for (auto i: nums) mp[i]++;
            int prev = -1;
            int ans = INT_MIN;
            for (auto i: mp)
            {
                if (prev == -1)
                {
                    prev = i.first;
                }
                else
                {
                    ans = max(ans, i.first - prev);
                    prev = i.first;
                }
            }
            return ans == INT_MIN ? 0 : ans;
        }
};