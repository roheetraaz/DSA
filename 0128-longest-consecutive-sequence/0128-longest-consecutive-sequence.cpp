class Solution
{
    public:
        int longestConsecutive(vector<int> &nums)
        {
            unordered_set<int> s;
            for (auto i: nums) s.insert(i);
            int ans = 0;
            int count = 1;
            for (auto i: s)
            {
                int x = i;
                // to check if this element is taken into account or not
                if (s.find(i - 1) == s.end())
                {
                    count = 1;
                    x = i;

                    while (s.find(x + 1) != s.end())
                    {
                        count++;
                        x = x + 1;
                    }
                }
                ans = max(count, ans);
            }
            return ans;
        }
};