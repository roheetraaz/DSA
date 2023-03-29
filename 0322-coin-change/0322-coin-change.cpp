class Solution {
public:

    int coinChange(vector<int>& coins, int amount) {
        
        vector<int>dp(amount+1,1e8-2);
        dp[0]=0;
        for(int i=0;i<=amount;i++){
        for(int j=0;j<coins.size();j++)
        {
            if(i>=coins[j])
            {
            dp[i]=min(dp[i-coins[j]]+1,dp[i]);
            }
        }
        }
        if(dp[amount]==1e8-2){
            return -1;
        }
        else{
            return dp[amount];
        }
    }
};