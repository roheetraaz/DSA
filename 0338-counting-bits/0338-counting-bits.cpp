class Solution
{
    public:
        int count1(int n)
        {
            int count = 0;
            while (n)
            {
                count++;
                n &= (n - 1);
            }
            return count;
        }
    vector<int> countBits(int n)
    {
        vector<int> v;
        for (int i = 0; i <= n; i++)
        {
            v.push_back(count1(i));
        }
        return v;
    }
};