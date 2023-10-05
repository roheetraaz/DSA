class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        set<int>s;
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
               if(nums[j]==nums[i])cnt++;
           }
           s.insert(nums[i]);
        }
        return cnt;
    }
};