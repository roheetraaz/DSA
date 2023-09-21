class Solution
{
    public:

        int countDistinctIntegers(vector<int> &nums)
        {
            set<int> ans;
            for (auto i: nums) ans.insert(i);
            for (auto i: nums)
            {
                string s = to_string(i);
                reverse(s.begin(), s.end());
                ans.insert(stoll(s));
            }
            return ans.size();
        }
};