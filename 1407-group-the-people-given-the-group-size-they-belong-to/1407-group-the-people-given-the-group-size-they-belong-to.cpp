class Solution
{
    public:
        vector<vector < int>> groupThePeople(vector<int> &x)
        {
            vector<vector < int>> ans;
            int n = x.size();
            vector<vector < int>> adj(n+1);
            for (int i = 0; i < n; i++)
            {
                adj[x[i]].push_back(i);
                if (adj[x[i]].size() == x[i])
                {
                    ans.push_back(adj[x[i]]);
                    adj[x[i]].clear();
                }
            }
            return ans;
        }
};