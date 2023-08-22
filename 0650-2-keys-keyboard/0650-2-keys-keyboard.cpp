class Solution {
private:
    int dp[1010][1010];
    int n;

    int rec(int cur , int prev){
        if(cur > n)return 1e9;

        if(cur == n )return 0;

        if(dp[cur][prev] != -1)return dp[cur][prev];

        int ans = 1e9;
        //paste
        if(prev > 0)
        ans = min(ans , 1 + rec(cur + prev, prev));
        //copy
        if(cur != prev)ans = min(ans , 1 + rec(cur,cur));

        return dp[cur][prev] = ans;
    }
public:
    int minSteps(int x) {
        n = x;
        memset(dp,-1,sizeof(dp));\
        
        int ans = rec(1,0);

        // cout<<ans;
        return ans ;
    }
};