class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<pair<int,int>>ans;
            int maxi=0;
        for(int i=0;i<mat.size();i++){
                
                int count=0;
                for(int j=0;j<mat[0].size();j++){
                        if(mat[i][j]==1){
                                count++;
                        }
                  
                }
               
                ans.push_back({count,i});
        }
         sort(ans.begin(),ans.end());
         vector<int>final;
         int z=ans[ans.size()-1].first;
         for(int i=0;i<ans.size();i++){
                 if(ans[i].first==z){
                         final.push_back(ans[i].second);
                         final.push_back(z);
                         break;
                 }
         }
           return final;
    }
};