class Solution
{
    public:
        string reverseWords(string s)
        {
            string ans = "";
            string t = "";
            int n=s.size();
            for (int i = 0; i < n; i++)
            {

                if (s[i] != ' ')
                {
                    t += s[i];
                }
                if (s[i] == ' ' || i == n - 1)
                {
                    reverse(t.begin(), t.end());
                    ans += t;
                    t = "";
                    if (i != n - 1) ans += ' ';
                }
            }
            return ans;
        }
};