class Solution {
public:
    int solve(vector<vector<int>>&piles, int k,int i,int ind,int n,  vector<vector<vector<int>>>&dp)  {
            if((k==0) || (i==n)) {
                    return 0; 
            }
            if(dp[i][ind][k]!=-1)return dp[i][ind][k];
            int take=INT_MIN;
            if(ind <piles[i].size()){
            take= max(take,piles[i][ind] + solve(piles,k-1,i,ind+1,n,dp));    
            }
            int not_take=solve(piles,k,i+1,0,n,dp);
            return dp[i][ind][k] =max(take,not_take);
    }  
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        int n=piles.size();
         vector<vector<vector<int>>>dp;
        for(int i=0;i<piles.size();i++)
        {
            int m=piles[i].size();
            vector<vector<int>> v (m+1,vector<int>(k+1,-1));
            dp.push_back(v);
        }
        
         int ans=solve(piles,k,0,0,n,dp);
        return ans;
       
    }
};