class Solution
{
    public:
        vector<int> arr;
    int k;
    bool check(int mid)
    {
        return (arr[mid] - mid) > k;
    }
    int findKthPositive(vector<int> &a, int l)
    {
        int lo = 0, hi = a.size()-1;
        int ans = hi+1;
        arr = a;
        k = l;
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (check(mid))
            {
                ans = mid;
                hi = mid - 1;
            }
            else lo = mid + 1;
        }
        return ans + l;
    }
};
// sexy soln