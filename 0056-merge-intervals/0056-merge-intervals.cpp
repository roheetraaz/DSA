class Solution
{
    public:
        vector<vector < int>> merge(vector<vector < int>> &intervals)
        {
            vector<vector < int>> ans;
            sort(intervals.begin(),intervals.end());

            int n = intervals.size();
            int x=-1;
            int y=-1;
            if(n==1){
                return intervals;
            }
            for (int i = 0; i < n-1; i++)
            {
                if(x==-1){
                    x=intervals[i][0];

                }
                if(y==-1){
                    y=intervals[i][1];
                }
                if (y >= intervals[i + 1][0])
                {
                    y = max(y,intervals[i + 1][1]);
                }
          
                else if(y!=-1){
                    ans.push_back({x,y});
                    x=-1; y=-1;
                }
                if(i==n-2){
                    if(x!=-1 && y!=-1)
                    ans.push_back({x,y});
                }
             
            }
            if(y==-1 && x==-1){
                ans.push_back({intervals[n-1][0], intervals[n-1][1]});
            }
            return ans;
        }
};