class Solution
{
    public:
        bool isRectangleCover(vector<vector < int>> &rectangles)
        {
            map<pair<int, int>, int> mp_dia_right;
            for (auto i: rectangles)
            {
                mp_dia_right[{i[0],i[1]}]++;
                mp_dia_right[{i[2],i[3]}]++;
                mp_dia_right[{i[2],i[1]}]--;
                mp_dia_right[{i[0],i[3]}]--;
                
            }
            int cnt = 0;
            for (auto i: mp_dia_right)
            {
                if(abs(i.second)==1)cnt++;
                if(abs(i.second)>1)return false;
            }
          
            return (cnt==4);
        }
};