class Solution {
private:
// #define int long long int 
int dp[100100];
int n;
string s;
long long int mod = 1e9+7;
 
long long int rec(int i){

    if(i>n)return 0;
    
    if(i==n)return 1;

    if(dp[i] != -1)return dp[i];

    long long int ans = 0;
    
    if(s[i] == '0'){
        return dp[i] = 0;
    }

    if(s[i] == '*'){
        // 1 to 9 values
        ans+=(rec(i+1)%mod*9)%mod;
        ans%=mod;

        
        // and 2 next num;
        if(i+1<n && ((s[i+1]>='0' and s[i+1]<='6')))ans+=rec(i+2)%mod;
        // 2 next *
        if(i+1<n && (s[i+1] == '*'))ans+= (rec(i+2)%mod*6)%mod;
        
        // for 1 and next num
        if(i+1<n and s[i+1]>='0' and s[i+1]<='9')ans += rec(i+2)%mod;

        // for 1 and next *
        if(i+1<n and s[i+1] == '*')ans +=((rec(i+2)%mod*9))%mod;
        ans%=mod;
    }

    if(s[i] >= '0' and s[i]<='9')ans += rec(i+1)%mod;

    if(s[i] == '1' and i+1<n and s[i+1]>='0' and s[i+1]<='9')ans += rec(i+2)%mod;
    if(s[i] == '1' and i+1<n and s[i+1]=='*')ans +=(rec(i+2)%mod*9)%mod;

    if(s[i] == '2' and i+1<n and s[i+1]>='0' and s[i+1]<='6')ans+=rec(i+2)%mod;
    if(s[i] == '2' and i+1<n and s[i+1]=='*')ans  += (rec(i+2)%mod*6)%mod;
    // if(s[i] == '1')

    return dp[i]= ans%mod;
}
public:
    int numDecodings(string x) {
       s = x;
       n = x.size() ;
       memset(dp,-1,sizeof(dp));
       int ans = rec(0);
       return ans;
    }
};