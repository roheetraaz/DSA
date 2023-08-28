
class Solution
{
    public:
    int k;
    bool check(int mid)
    {
        if(mid==0)return 0;
        return mid >k/mid;
    }
    int mySqrt(int x)
    {
        int lo = 0, hi = x;
        int ans = x; 
        k = x;
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
        if(ans==0)return 0;
        return (ans==x/ans) ? ans : ans-1 ;
    }
};