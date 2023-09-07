class Solution
{
    public:
        vector<int> dailyTemperatures(vector<int> &nums2)
        {

            stack<int> s;
            int n = nums2.size();
            vector<int> ans(n, 0);

            unordered_map<int, int> mp;
            // for (int i = 0; i < n; i++)
            // {
            //     mp[nums2[i]] = i;
            // }
            for (int i = n - 1; i >= 0; i--)
            {
                while (!s.empty() && s.top() <= nums2[i])
                {
                    s.pop();
                }
                if (s.empty() == false)
                {
                    ans[i] = mp[s.top()]-i;
                    // s.pop();
                }
                else
                {
                    ans[i] = 0;
                }
                s.push(nums2[i]);
                mp[nums2[i]]=i;
            }

            return ans;
        }
};