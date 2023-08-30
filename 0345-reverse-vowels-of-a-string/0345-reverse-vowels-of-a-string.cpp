class Solution
{
    public:
       	// 2 pointer optimised 
        string reverseVowels(string st)
        {
            int n = st.size();
            int i = 0;
            string str = "AEIOUaeiou";
            string s = st;
            unordered_map<int, int> mp;
            for (auto l: str) mp[l]++;
    
            int j = n - 1;
            while (i < j)
            {
                if (mp[s[i]] == 0)
                {
                    i++;
                }
                if (mp[s[j]] == 0)
                {
                    j--;
                }
                if (mp[s[i]] != 0 && mp[s[j]] != 0)
                {
                    swap(s[i], s[j]);
                    i++;
                    j--;
                }
            }
            return s;
        }
};