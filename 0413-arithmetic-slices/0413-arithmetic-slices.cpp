class Solution
{
    public:
        int numberOfArithmeticSlices(vector<int> &nums)
        {
            int ans = 0;
            int n = nums.size();
            if (n < 3) return 0;

            int i = 0;
            int j = 1;
            int count = 0;
            int diff = nums[1] - nums[0];
            while (j < n)
            {
                int temp = diff;
                if (nums[j] - nums[j - 1] == diff)
                {
                    j++;
                }
                else if (nums[j] - nums[j - 1] != diff)
                {

                    diff = nums[j] - nums[j - 1];
                }
                if (temp != diff || j == n)
                {
                    int x = (j - i);
                    if (x >= 3)
                    {
                        int subarray = (x*(x + 1)) / 2 - (2 *x - 1);
                        count = count + subarray;
                    }
                    i = j - 1;
                    j++;
                }
            }
            return count;
        }
};