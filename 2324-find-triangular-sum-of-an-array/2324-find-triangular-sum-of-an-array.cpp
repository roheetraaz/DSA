class Solution
{
    public:
        int triangularSum(vector<int> &nums)
        {
            vector<int> pre;
            pre = nums;
            int n = nums.size();
            n = n - 1;
            while (n--)
            {
                vector<int> v;
                int z = pre.size();
                for (int i = 0; i < z - 1; i++)
                {
                    v.push_back((pre[i] + pre[i + 1]) % 10);
                }
                pre=v;
            }
            return pre[0];
        }
};