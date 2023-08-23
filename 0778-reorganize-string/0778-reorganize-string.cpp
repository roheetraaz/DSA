class Solution
{
    public:
        string reorganizeString(string s)
        {
            unordered_map<int, int> mp;
            int n = s.size();
            int maxi = INT_MIN;
            string ans = "";
            char l;
            for (auto i: s)
            {
                int temp = maxi;
                mp[i]++;
                maxi = max(maxi, mp[i]);
                if (maxi != temp)
                {
                    l = i;
                }
            }
         
            int index = 0;
            while (maxi > 0 && index < s.size())
            {
                s[index] = l;
                maxi--;
                index += 2;
            }

            if (maxi != 0)
            {
                return "";
            }
            mp[l] = 0;

            for (auto i :mp)
            {
                while (i.second > 0)
                {
                    index = index >= s.size() ? 1 : index;
                    s[index] = i.first ;
                    index += 2;
                    i.second--;
                }
            }

            return s;
        }

};