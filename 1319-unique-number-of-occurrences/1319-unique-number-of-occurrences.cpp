class Solution
{
    public:
        bool uniqueOccurrences(vector<int> &arr)
        {
            unordered_map<int, int> mp;
            for (auto i: arr) mp[i]++;
            map<int, int> mp2;
            for (auto i: mp)
            {
                int x = mp2[i.second]++;
                if (x > 0) return false;
            }

            return true;
        }
};