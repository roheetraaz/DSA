class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int,int>mp;
        queue<int>q;
        for(auto i :nums){
                mp[i]++;
                if(mp[i]==3){
                        mp.erase(i);
                }
        }
        for(auto i : mp){
         return i.first;
        }
        return 0;
    }
};