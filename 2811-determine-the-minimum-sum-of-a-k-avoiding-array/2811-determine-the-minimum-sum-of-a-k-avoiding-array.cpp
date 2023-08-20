class Solution
{
    public:
        int minimumSum(int n, int k)
        {
            vector<int> ans;
            vector<int> d1;
            for (int i = 1; i <= n; i++) d1.push_back(i);
            int k1 = 1;
            for (int i = 0; i < d1.size(); i++)
            {
                for (int j = 0; j < d1.size(); j++)
                {
                    if (d1[i] + d1[j] == k && i != j)
                    {
                        ans.push_back(max(d1[i], d1[j]));
                        d1.push_back(n + k1);
                        k1++;
                    }
                }
            }

            int sum = 0;
            unordered_map<int, int> mp;
            for (auto i: ans) mp[i]++;
            int l = 1;
            int siz = 0;
            while (siz != n)
            {
                if (mp.find(l) == mp.end())
                {
                    sum += l;
                    siz++;
                }

                l++;
            }

            return sum;
        }
};