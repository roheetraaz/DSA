class Solution
{
    public:
        int minOperations(vector<int> &nums, int x)
        {
            int sum = 0;
            for (auto i: nums) sum += i;
            int num = sum - x;
            if (num < 0) return -1;
            if (num == 0) return nums.size();
            int ans = INT_MIN;
            int left = 0, right = 0, curr = 0;
            while (right < nums.size())
            {
                curr += nums[right];

                while (curr > num)
                {
                    curr -= nums[left];
                    left++;
                }
                if (curr == num) ans = max(ans, right - left + 1);
                right++;
            }
            return (ans == INT_MIN) ? -1 : nums.size() - ans;
        }
};