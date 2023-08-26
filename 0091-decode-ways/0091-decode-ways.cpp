class Solution
{
    public:
    // int ans=0;
    int dp[100100];
    int solve(int ind, string s)
    {   
        if(ind > s.size())return 0;
        if (ind == s.size()) return 1;

        if(dp[ind] != -1)return dp[ind];
        int ans=0;

        if (s[ind] == '0')
        {

            return dp[ind]= 0;
        }

        else if (s[ind] == '1' or(s[ind] <= '2' && (ind + 1) < s.size() and s[ind+1]>='0' and s[ind + 1] <= '6'))
        {
            ans += solve(ind + 1, s) + solve(ind + 2, s);
        }
        else ans += solve(ind + 1, s);
        return dp[ind] = ans;
    }
    int numDecodings(string s)
    {
        memset(dp,-1,sizeof(dp));
        return solve(0, s);
         
    }
};