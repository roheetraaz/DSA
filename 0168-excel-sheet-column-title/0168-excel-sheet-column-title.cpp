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
                int quo = x % 26;
                if (quo == 0)
                {
                    ans += mp[26];
                    x = x - 26;
                }
                else ans += mp[quo];
                x = x / 26;
            }
            ans += mp[x];
            reverse(ans.begin(), ans.end());
            return ans;
        }
};