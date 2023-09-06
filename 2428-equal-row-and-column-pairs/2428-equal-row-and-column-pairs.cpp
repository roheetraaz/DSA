class Solution
{
    public:
        int equalPairs(vector<vector < int>> &grid)
        {
            map<vector<int>,int> mp;
            int n = grid.size();
            int ans = 0;

            for (auto i: grid) mp[i]++;
            for (int i = 0; i < grid.size(); i++)
            {
                vector<int> v;
                for (int j = 0; j < n; j++)
                {
                    v.push_back(grid[j][i]);
                }
                // if (mp.find(v) != mp.end())
                 ans += mp[v];
            }
            return ans;
        }
};