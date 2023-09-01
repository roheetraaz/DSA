class Solution
{
    public:
        int longestOnes(vector<int> &nums, int k)
        {
            int n = nums.size();
            int i = 0;
            int j = 0;
            int len = 0;
            vector<int> prefsumi(nums.size() + 1, 0);
            int l = 0;

            for (int i = 0; i <= nums.size(); i++)
            {
                prefsumi[i] = l;
                if (i < n)
                {
                    l += nums[i];
                }
            }
            while (i < n && j < n)
            {
                while (i <= j && j - i + 1 - (prefsumi[j + 1] - prefsumi[i]) > k)
                {
                    i++;
                }
                len = max(len, j - i + 1);
                j++;
            }
            return len;
        }
};