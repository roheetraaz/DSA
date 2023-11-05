//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:


    int solve(int idx, const vector<vector < int>> &offers, vector< int > &dp)
    {
            if (idx == offers.size()) return 0;
            if (dp[idx] != -1) return dp[idx];

            int notTake = solve(idx + 1, offers, dp);

            vector<int> target = { offers[idx][1],1000001};	// Use INT_MAX for upper_bound
            int next_idx = upper_bound(offers.begin(), offers.end(), target) - offers.begin();

            int take = 1 + solve(next_idx, offers, dp);

            return dp[idx] = max(take, notTake);
    }


    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        
        vector<vector<int>>pairs(n);
        for(int i=0;i<n;i++){
            pairs[i].push_back(end[i]);
            pairs[i].push_back(start[i]);
        }
        sort(pairs.begin(), pairs.end());
        int cnt=1;
        int p_x=pairs[0][0];
        int p_y=pairs[0][1];
        for(int i=1;i<n;i++){
            if(pairs[i][1]>p_x){
                cnt++;
                p_x=pairs[i][0];
                p_y=pairs[i][1];
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends