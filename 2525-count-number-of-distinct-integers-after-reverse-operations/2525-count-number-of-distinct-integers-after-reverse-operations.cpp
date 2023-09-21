class Solution
{
    public:

        int countDistinctIntegers(vector<int> &nums)
        {
            int cnt = 0;
            set<int> ans;
            for (auto i: nums) ans.insert(i);
            for (auto i: nums)
            {
                string s = to_string(i);
                string t = s;
                reverse(s.begin(), s.end());
                if (s != t) ans.insert(stoll(s));
            }
            return ans.size();
        }
};