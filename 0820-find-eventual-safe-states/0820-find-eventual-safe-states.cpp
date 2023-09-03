class Solution
{
    public:
        vector<int> eventualSafeNodes(vector<vector < int>> &graph)
        {
            int n = graph.size();
            vector<int> indegree(n, 0);
            int j = 0;
            vector<int> adj[n + 1];
            for (int i = 0; i < n; i++)
            {
                for (auto j: graph[i])
                {
                    adj[j].push_back(i);
                    indegree[i]++;
                }
            }

            vector<int> ans;
            queue<int> q;

            for (int i = 0; i < n; i++)
            {
                if (indegree[i] == 0) q.push(i);
            }

            vector<int> safeNodes;

            while (q.size())
            {
                int node = q.front();
                q.pop();

                ans.push_back(node);

                for (auto &adjnode: adj[node])
                {
                    if (--indegree[adjnode] == 0) q.push(adjnode);
                }
            }
            sort(ans.begin(), ans.end());
            return ans;
        }
};