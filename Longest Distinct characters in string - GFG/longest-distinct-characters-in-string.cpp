//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    // your code here
    unordered_map<char, int> mp;
            int count = 0;
            int n=s.size();
            int ans=INT_MIN;
            if(n==0){
                    return 0;
            }
            for (int i = 0; i < n; i++)
            {
                if (mp.find(s[i]) == mp.end()) {
                        count++;
                        ans=max(ans,count);
                }
                else{
                        count=1;
                        i=mp[s[i]]+1;
                        mp.clear();
                }
                mp[s[i]]++;
                mp[s[i]]=i;
                ans=max(ans,count);
            }
            return ans;
    
}