class Solution
{
    public:

        int bestClosingTime(string customers)
        {
            vector<int> a;
            for (auto i: customers)
            {
                if (i == 'Y') a.push_back(1);
                else a.push_back(-1);
            }
            unordered_map<int, int> mp;
            vector<int> pre(a.size(), 0);
            pre[0] = a[0];
            if(pre[0]==-1)mp[pre[0]]=-1;
            else mp[pre[0]]=1;
            for (int i = 1; i < a.size(); i++)
            {
                pre[i] = pre[i - 1] + a[i];
                mp[pre[i]]++;
                mp[pre[i]]--;
                if (mp[pre[i]] == 0)
                {
                    mp[pre[i]] = i+1;
                }
            }
            int x=*max_element(pre.begin(), pre.end());

            return (x<=0)?0:mp[x];
        }
};