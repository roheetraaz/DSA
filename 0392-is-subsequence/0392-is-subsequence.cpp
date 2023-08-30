class Solution
{
    public:
        bool isSubsequence(string s, string t)
        {
            int m=s.size();
            int n=t.size();
            int L[m + 1][n + 1];

            for (int i = 0; i <= m; i++)
            {
                for (int j = 0; j <= n; j++)
                {
                    if (i == 0 || j == 0)
                        L[i][j] = 0;

                    else if (s[i - 1] == t[j - 1])
                        L[i][j] = L[i - 1][j - 1] + 1;

                    else
                        L[i][j] = max(L[i - 1][j], L[i][j - 1]);
                }
            }
            return L[m][n]==s.size();
        }
};