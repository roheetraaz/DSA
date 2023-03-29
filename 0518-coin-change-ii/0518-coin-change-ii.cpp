class Solution {
public:
    int change(int amount, vector<int>& coins) {
            vector<int>dp(amount+1,0);
            int n=coins.size();
            dp[0]=1;
            for(int i=0;i<coins.size();i++){
                    for(int j=1;j<amount+1;j++){
                            // int ans=0;
                            if(coins[i]<=j)
                               {
                                    dp[j]+=dp[j-coins[i]];
                            }
                            // dp[i]=ans;
                    }
            }
            return dp[amount];
    }
};