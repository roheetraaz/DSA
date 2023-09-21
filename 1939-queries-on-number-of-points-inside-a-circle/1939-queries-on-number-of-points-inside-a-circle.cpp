class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>ans;
        for(auto i : queries){
            int x1=i[0];
            int y1=i[1];
            int r=i[2];
            int cnt=0;
            for(auto it : points){
                int x=it[0];
                int y=it[1];
                int circ_eqn= pow((x-x1),2)+pow((y-y1),2)-pow(r,2);
                if(circ_eqn<=0)cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};