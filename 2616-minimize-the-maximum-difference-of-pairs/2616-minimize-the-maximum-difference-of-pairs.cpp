class Solution
{
    public:
        int minimizeMax(vector<int> &nums, int p)
        {

            sort(nums.begin(), nums.end());
            int n = nums.size();
            int l = 0, r = nums[n - 1] - nums[0];
            while (l < r)
            {
                int mid = (l + r) / 2;
                int cnt = 0;
                for (int i = 0; i < n-1; i++)
                {
                    if(nums[i+1] - nums[i] <= mid) {i++;
                    cnt ++;
                                                   }
                }
                if (cnt >= p)
                {
                    r = mid;
                }
                else
                {
                    l = mid + 1;
                }
            }
            return l;
        }
};