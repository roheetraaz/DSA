class Solution
{
    public:
        int candy(vector<int> &v)
        {
            int n = v.size();

            vector<int> ans(n, 1);
            for (int i = 1; i < n; i++)
            {
                if (v[i] > v[i - 1])
                {
                    ans[i] = ans[i - 1] + 1;
                }
            }
            int result = 0;
            for (int i = n - 1; i > 0; i--)
            {
                if (v[i - 1] > v[i])
                {
                    ans[i - 1] = max(ans[i] + 1, ans[i - 1]);
                }
               
            }
            for(auto i :ans)result+=i;
            return result;
        }
};