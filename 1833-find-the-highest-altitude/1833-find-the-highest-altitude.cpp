class Solution
{
    public:
        int largestAltitude(vector<int> &a)
        {
            vector<int> pre(a.size(), 0);
            pre[0] = a[0];

            for (int i = 1; i < a.size(); i++)
            {
                pre[i] = pre[i - 1] + a[i];
            }
            int x = *max_element(pre.begin(), pre.end());
            return (x <= 0) ? 0 : x;
        }
};