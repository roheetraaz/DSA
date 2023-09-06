class Solution
{
    public:
        bool closeStrings(string word1, string word2)
        {
            map<int, int> mp;
            vector<int> v1(26, 0), v2(26, 0);
            for (auto i: word1) mp[i]++;
            int x = mp.size();
            for (auto i: word2) mp[i]++;
            int y = mp.size();
            for (auto i: word2) v2[i - 'a']++;

            for (auto i: word1) v1[i - 'a']++;

            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());

            return (x == y) && (v1 == v2);
        }
};