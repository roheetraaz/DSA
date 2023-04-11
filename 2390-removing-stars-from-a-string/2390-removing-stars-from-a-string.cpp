class Solution
{
    public:
        string removeStars(string s)
        {
            string z;
            for (int i = 0; i < s.size(); i++)
            {
                if ((s[i] == '*'))
                {
                    z.pop_back();
                }
                else z += s[i];
            }
            return z;
        }
};