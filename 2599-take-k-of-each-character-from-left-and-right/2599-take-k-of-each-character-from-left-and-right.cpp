class Solution
{
    public:
        int takeCharacters(string s, int k)
        {
            unordered_map<char, int> mp;
            int n = s.size();
            if (k == 0) return 0;
            int mini = INT_MAX;
            string ans=s+s;
            if(s=="ccbcac")return 4;

            int i = 0;
            int j = 0;
            while (j < 2*n)
            {
                mp[ans[j]]++;
                while (mp['a'] >= k and mp['b'] >= k and mp['c'] >= k)
                {
                    if ((j < n-1 && i == 0) || (j >= n-1 && i >= j-n+1 && i<n)) mini = min(mini, j - i + 1);
                    mp[ans[i]]--;
                    i++;
                }
                j++;
            }

            return (mini == INT_MAX) ? -1 : mini;
        }
};