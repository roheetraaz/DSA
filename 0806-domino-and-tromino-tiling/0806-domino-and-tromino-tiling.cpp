class Solution {
public:
    int numTilings(int n) {
        int mod=1000000007;
        vector<long long>dp(n+6,0);
        dp[1]=1;
        dp[2]=2;
        dp[3]=5;
        for(int i=4;i<=n;i++){
            dp[i]= dp[i-3]+ dp[i-1]*2;
            dp[i]=dp[i]%mod;
        }
        return dp[n];
    }
};