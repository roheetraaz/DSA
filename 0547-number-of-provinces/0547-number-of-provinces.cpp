class Solution
{
    public:

        void bfs(int node, vector<int> adj[], vector<int> &vis)
        {
            vis[node] = 1;
            queue<int> q;
            q.push(node);
            while (!q.empty())
            {
                int temp = q.front();
                q.pop();
                for (auto it: adj[temp])
                {
                    if (!vis[it])
                    {
                        vis[it] = 1;
                        q.push(it);
                    }
                }
            }
        }
    int findCircleNum(vector<vector < int>> &isConnected)
    {

        int n = isConnected.size();
        vector<int> adj[n + 1];
        for (int i = 0; i < isConnected.size(); i++)
        {
            for (int j = 0; j < isConnected[0].size(); j++)
            {
                if (isConnected[i][j] == 1)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int count = 0;
        vector<int> vis(n, 0);
        for (int i = 0; i < n; i++)
        {

            if (!vis[i])
            {
                
                bfs(i, adj, vis);
                count++;
            }
        }

        return count;
    }
};