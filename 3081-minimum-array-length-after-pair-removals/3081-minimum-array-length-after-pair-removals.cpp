class Solution
{
    public:
        int minLengthAfterRemovals(vector<int> &nums)
        {
            unordered_map<int, int> mp;
            for(auto i : nums)mp[i]++;
            int maxi=0;
            int n =nums.size();
            for(auto i : mp){
                maxi=max(maxi,i.second);
            }
            if(maxi>n/2)return 2*maxi-n;
            if(n%2==0)return 0;
            return 1;
        }
};