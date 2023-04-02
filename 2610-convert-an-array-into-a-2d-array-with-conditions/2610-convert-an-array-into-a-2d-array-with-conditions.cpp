class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
            unordered_map<int,int>mp;
            vector<vector<int>>v;
            for(int i=0;i<nums.size();i++){
                    mp[nums[i]]++;
            }
            int maxi=0;
            for(auto i:mp){
                    maxi=max(maxi,i.second);
            }
            while(maxi){
                    vector<int>l;
                    for(auto i : mp){
                            if(i.second>0){
                            l.push_back(i.first);
                            mp[i.first]--;
                            }
                    }
                    v.push_back(l);
                    maxi--;
            }
            return v;
    }
};