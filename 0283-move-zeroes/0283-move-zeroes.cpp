class Solution
{
    public:
        void moveZeroes(vector<int> &nums)
        {
            int countzer = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] == 0)
                {
                    countzer++;
                }
            }
            while (countzer)
            {
                for (int i = 0; i < nums.size() - 1; i++)
                {
                    if (nums[i] == 0)
                    {
                        swap(nums[i], nums[i + 1]);
                    }
                }
                countzer--;
            }
        }
};