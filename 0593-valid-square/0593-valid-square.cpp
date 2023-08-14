class Solution
{
    public:
        bool validSquare(vector<int> &p1, vector<int> &p2, vector< int > &p3, vector< int > &p4)
        {
            vector<vector<int>> v;
            set<vector<int>> s;
            
            v.push_back(p1);
            v.push_back(p2);
            v.push_back(p3);
            v.push_back(p4);
            for(auto i : v)s.insert(i);
            if(s.size()<4)return false;
            unordered_map < long long, int> mp;
            for (int i = 0; i < 4; i++)
            {
                for (int j = i + 1; j < 4; j++)
                {
                    long long side = pow((v[j][1] - v[i][1]), 2) + pow((v[j][0] - v[i][0]), 2);
                    mp[side]++;
                }
            }
            if (mp.size() == 2) return true;
            return false;
        }
};