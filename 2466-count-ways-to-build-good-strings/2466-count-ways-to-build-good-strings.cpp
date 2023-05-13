class Solution
{
    public:
        int mod = 1e9 + 7;
    int countGoodStrings(int low, int high, int zero, int one)
    {
        vector<int> dp(high + 1, 0);
        dp[0] = 1;
        for (int i = 0; i < high + 1; i++)
        {
            if (i >= zero)
            {
                // adding only if i is greater than no. of zeroes and 1
                dp[i] = (dp[i] + dp[i - zero]) % mod;
            }
            if (i >= one)
            {
                dp[i] = (dp[i] + dp[i - one]) % mod;
            }
        }
        int sum = 0;
        for (int i = low; i <= high; i++)
        {
            // summing up for every combination of low to high 
            sum = (sum + dp[i]) % mod;
        }
        return sum;
        // takeaway: read questions properly , you missed the mod here  
    }
};