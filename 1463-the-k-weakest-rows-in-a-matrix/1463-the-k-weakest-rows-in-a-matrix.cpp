class Solution
{
    public:
        vector<int> kWeakestRows(vector<vector < int>> &mat, int k)
        {
            vector<pair<int, int>> v;
            for (int i = 0; i < mat.size(); i++)
            {
                int cnt = 0;
                for (int it = 0; it < mat[i].size(); it++)
                {
                    if (mat[i][it] == 1) cnt++;
                }
                v.push_back({ cnt,
                    i });
            }
            sort(v.begin(), v.end());
            vector<int> ans;
            for (auto i: v )
            {
                if(k>0){
                ans.push_back(i.second);
                }
                k--;
            }
            return ans;
        }
};