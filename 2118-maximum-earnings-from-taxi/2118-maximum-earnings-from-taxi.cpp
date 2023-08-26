class Solution {
public:
    vector<int>temp;
    vector<vector<int>>arr;
    long long dp[100005];
    long long solve(int i){
        if(i>=arr.size())return 0;
        if(dp[i]!=-1)return dp[i];
        long long ans=solve(i+1);
        int j=lower_bound(temp.begin() ,temp.end() , arr[i][1] )-temp.begin();
        long long ans1 = solve(j) + arr[i][1] - arr[i][0] + arr[i][2];
        return  dp[i] = max(ans , ans1);

    }
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        sort(rides.begin(),rides.end());
        arr=rides;
        for(auto i : rides){
            temp.push_back(i[0]);
        }
        memset(dp,-1,sizeof(dp));
        return solve(0);
    }
};