class Solution
{
    public:
        int minLengthAfterRemovals(vector<int> &nums)
        {
            unordered_map<int, int> mp;
            int n=nums.size();
            int maxi = 0;
            for (auto i: nums)
            {
                mp[i]++;
                maxi = max(maxi, mp[i]);
            }

            if (maxi > n / 2) return 2 *maxi - n;
            if (n % 2 == 0) return 0;
            return 1;
        }
};