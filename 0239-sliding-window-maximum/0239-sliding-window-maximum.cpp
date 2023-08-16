class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        for(int i=0;i<k-1;i++)
        {
            pq.push({nums[i],i});
        }
        for(int i=k-1;i<nums.size();i++)
        {
            pq.push({nums[i],i});
            int y=pq.top().second;
            int x=pq.top().first;
            while(!(y<=i&&y>=i-k+1))
            {
                pq.pop();
                y=pq.top().second;
                x=pq.top().first;
            }
            ans.push_back(x);
        }
        return ans;
    }
};