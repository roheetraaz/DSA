// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        // while(n>0)
        // {
        //     if(!(isBadVersion(n-1)&&isBadVersion(n))){
        //     return n;
        // }
        //      n=n-1;
        // }
        // return -1;
        // practise question to get an idea of function calling
        // binary search should be used which i missed
        int lower = 1, upper = n, mid;
        while(lower < upper) {
            mid = lower + (upper - lower) / 2;
            if(!isBadVersion(mid)) lower = mid + 1;   /* Only one call to API */
            else upper = mid;
        }
        return lower;  
    }
};