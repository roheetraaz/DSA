class Solution
{
    public:
        int minDeletions(string s)
        {
            unordered_map<int, int> mp1, mp2;
            for (auto i: s) mp1[i - 'a']++;
            for (auto i: mp1) mp2[i.second]++;
            int cnt = 0;
            int k = mp1.size();
            while (mp2.size() != mp1.size())
            {
                for (auto i: mp2)
                {
                    if (i.second > 1)
                    {
                        cnt++;
                        mp2[i.first]--;
                        if (i.first != 1)
                        {
                            mp2[i.first - 1]++;
                        
                        }
                        else k--;
                        if (mp2.size() == k) return cnt;
                    }
                    if (i.second < 0) return -1;
                }
            }
            return cnt;
        }
};