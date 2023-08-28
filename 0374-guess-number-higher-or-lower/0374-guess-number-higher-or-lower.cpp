/** 
 *Forward declaration of guess API.
 *@param  num   your guess
 *@return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *              otherwise return 0
 *int guess(int num);
 */
class Solution
{
    public:

    bool check(int mid)
    {
        return (guess(mid)<=0);
    }
    int guessNumber(int x)
    {
        int lo = 0, hi = x;
        int ans = x;
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