class Solution
{
    public:
        bool closeStrings(string word1, string word2)
        {
            map<int, int> mp, mp2, mp3;
            for (auto i: word1) mp[i]++;
            int x = mp.size();
            for (auto i: word2) mp[i]++;
            int y = mp.size();
            for (auto i: word2) mp2[i]++;

            for (auto i: word1) mp3[i]++;
            vector<int> v1, v2;
            for (auto i: mp2) v1.push_back(i.second);
            for (auto i: mp3) v2.push_back(i.second);
            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());

            return (x == y) && (v1==v2) && (word2.size() == word1.size());
        }
};