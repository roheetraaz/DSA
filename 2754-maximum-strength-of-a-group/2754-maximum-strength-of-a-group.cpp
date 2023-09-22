class Solution
{
    public:
        long long maxStrength(vector<int> &nums)
        {
            vector<int> neg;
            long long prod = 1;
            int z = nums.size();
            if (z == 1) return nums[0];
            if (z == 2) {}
            for (auto i: nums)
            {
                if (i < 0) neg.push_back(i);
                else if (i > 0)
                {
                    prod *= i;
                }
                else continue;
            }
            int n = neg.size();

            for (auto i: neg)
            {
                prod *= i;
            }

            if (n % 2 == 1)
            {
                long long x = *max_element(neg.begin(), neg.end());
                prod = prod / x;
            }
            return (prod == 1 && n<2) ? *max_element(nums.begin(), nums.end()) : prod;
        }
};