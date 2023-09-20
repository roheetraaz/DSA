class Solution
{
    public:
        int minOperations(vector<int> &nums, int x)
        {
            int n = nums.size();
            int sum = 0;
            vector<int> s = nums;
            for (auto i: nums) s.push_back(i);
            nums = s;
            int ans = INT_MAX;
            int i = 0, j = 0, curr = 0;
            while (j < nums.size())
            {
                curr += nums[j];

                while (curr > x)
                {
                    curr -= nums[i];
                    i++;
                }
                if (curr == x)
                {
                    if ((j < n - 1 && i == 0) || (j >= n - 1 && i >= j - n + 1 && i <= n))
                    {
                        ans = min(ans, j - i + 1);
                    }
                }
              
                j++;
            }
            return (ans == INT_MAX) ? -1 : ans;
        }
};