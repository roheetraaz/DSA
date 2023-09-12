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
            while (mp2.size() != k)
            {
                for (auto i: mp2)
                {
                    if (i.second > 1)
                    {
                        cnt++;
                        mp2[i.first]--;
                        // decreasing the most frequent frequency by 1;
                        if (i.first != 1)
                        {
                           	// increasing the frequeny of elements with freq_count 1 less by 1
                            mp2[i.first - 1]++;
                        }
                       	// if the frequency of element is only one,then we will delete the element in map1
                        else k--;
                        if (mp2.size() == k) return cnt;
                    }
                    if (i.second < 0) return -1;
                }
            }
            return cnt;
        }
};