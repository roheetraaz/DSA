class Solution
{
    public:
        int longestConsecutive(vector<int> &nums)
        {
            set<int>s;
            for(auto i :nums)s.insert(i);
            int n = nums.size();
            int x = INT_MAX;
            int ans=0;

            int count=1;
            for (auto i :s)
            {
                if (i-1 == x )
                {
                    count++;
                    
                }
                else{
                    count=1;
                }
                x = i;
                ans=max(count,ans);
            }
            return ans;
        }
};