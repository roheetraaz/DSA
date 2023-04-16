class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
                
            
            
            vector<pair<int,int>>ans;
            for(int i=0;i<divisors.size();i++){
                
                int count=0;
                for(int j=0;j<nums.size();j++){
                        if(nums[j]%divisors[i]==0){
                                count++;
                        }
                  
                }
                // maxi=max(count,maxi);
               
                ans.push_back({count,divisors[i]});
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
           return final[0];
    }
};