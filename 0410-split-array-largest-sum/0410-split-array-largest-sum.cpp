using lli = long long int;
class Solution
{
    public:
        vector<int> a;
    int n;
    int m;
    int sum;
    bool check(lli mid)
    {
        lli we_have = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (we_have >= a[i])
            {
                we_have -= a[i];
            }
            else
            {
                count++;
                if (count > m) return 0;
                we_have = mid;
                if (we_have >= a[i])
                {
                    we_have -= a[i];
                }
                else
                {
                    return 0;
                }
            }
        }
        return 1;
    }

    int splitArray(vector<int> &nums, int k)
    {
        a = nums;
        m = k;
        n = nums.size();
        sum = 0;
        for (auto i: nums) sum += i;
        lli low = 0;
        lli high = sum;
        lli ans = high;
        while (low <= high)
        {
            lli mid = low + (high - low) / 2;
            if (check(mid))
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};