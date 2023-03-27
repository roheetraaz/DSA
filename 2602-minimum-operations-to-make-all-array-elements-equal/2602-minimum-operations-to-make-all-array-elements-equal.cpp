class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        vector<long long> ans;
        int n = nums.size();
        vector<long long> pre(n+1,0);
        sort(nums.begin(),nums.end());
        pre[0] = 0;
        for(int i=1; i<=n; i++)
        {
            pre[i] = pre[i-1] + nums[i-1];
        }
        
        for(int i=0; i<queries.size(); i++)
        { 
          int x = lower_bound(nums.begin(),nums.end(),queries[i])-nums.begin();
          long long inc = (1L*x*queries[i]) - pre[x];
          long long dec = pre[n] - pre[x] - (1L*(n-x)*queries[i]);
          
         ans.push_back(inc + dec);                
        }
        return ans;
    }
};