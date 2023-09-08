class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=0;i<numRows;i++){
             vector<int>l;
            for(int j=0;j<=i;j++){
               if(i>0 && j>0 &&j<i){l.push_back(ans[i-1][j-1]+ans[i-1][j]);}
               else l.push_back(1);
            }
            ans.push_back(l);
        }
        return ans;
    }
};