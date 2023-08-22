class Solution
{
    public:
        string convertToTitle(int x)
        {
            string ans = "";
            string k = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            unordered_map<int, char> mp;
            int j = 1;
            for (auto i: k)
            {
                mp[j] = i;
                j++;
            }

            while (x > 26)
            {
                int rem = x % 26;
                if (rem == 0)
                {
                    ans += mp[26];
                    x = x - 26;
                }
                else ans += mp[rem];
                x = x / 26;
            }
            ans += mp[x];
            reverse(ans.begin(), ans.end());
            return ans;
        }
};