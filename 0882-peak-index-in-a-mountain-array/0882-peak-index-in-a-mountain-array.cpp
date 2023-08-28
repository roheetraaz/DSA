class Solution
{
    public:
        vector<int> arr;
    int n;
    bool check(int mid)
    {
        return arr[mid] > arr[mid+1];
    }
 
    int peakIndexInMountainArray(vector<int> &a)
    {
        n=a.size();
        int lo = 0, hi = a.size() - 1;
        int ans = n-1;
        arr = a;
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
        return ans;
    }
};