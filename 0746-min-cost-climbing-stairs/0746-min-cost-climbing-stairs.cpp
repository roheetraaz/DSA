class Solution {
public:
    int help(vector<int>&cost,int ind,int n,vector<int>&dp){
            if(ind>=n){
                    return 0;
            }
            if(dp[ind]!=-1){
                    return dp[ind];
            }
            int onestep= help(cost,ind+1,n,dp)+cost[ind];
            int twostep= help(cost,ind+2,n,dp)+cost[ind];
            return dp [ind]=min(onestep,twostep);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
         vector<int>dp(n+1,-1);
         return min(help(cost,0,n,dp),help(cost,1,n,dp));
    }
};