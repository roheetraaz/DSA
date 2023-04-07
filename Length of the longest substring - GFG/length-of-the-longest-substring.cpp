//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        //code
        int i=0,j=0,count=0;
        int ans=INT_MIN;
        vector<int>mp(26,0);
        while(j<s.size()){
            mp[s[j]-'a']++;
            if(mp[s[j]-'a']==1)count++;
            if(count==j-i+1){
                ans=max(ans,j-i+1);
            }
            else if(count < j-i+1)
            {
               while(mp[s[j]-'a'] > 1)
                {
                    mp[s[i]-'a']--;
                    if(mp[s[i]-'a']==0){
                        count--;
                    }
                    i++;
                }
            }
            j++;
            
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends