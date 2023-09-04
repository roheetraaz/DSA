class Solution
{
    public:
        void bfs(int node, vector<vector < int>> adj, vector< int > &vis)
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
    bool canVisitAllRooms(vector<vector < int>> &rooms)
    {

        int n = rooms.size();
        int count = 0;
        vector<int> vis(n, 0);
        for (int i = 0; i < n; i++)
        {

            if (!vis[i])
            {

                bfs(i, rooms, vis);
                count++;
            }
        }
        return count == 1;
    }
};