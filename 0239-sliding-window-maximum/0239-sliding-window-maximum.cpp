class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        set<pair<int,int>>s;
        for(int i=0; i<k-1; i++)s.insert({nums[i],i});
        vector<int>ans;
        for(int i=k-1; i<nums.size(); i++){
            s.insert({nums[i],i});

            auto it  = prev(s.end());
            ans.push_back(it->first);
            s.erase({nums[i+1-k],i+1-k});
        }
        return ans;
    }
};