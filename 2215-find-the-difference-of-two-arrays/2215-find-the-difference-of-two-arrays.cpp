class Solution
{
    public:
        vector<vector < int>> findDifference(vector<int> &nums1, vector<int> &nums2)
        {
            vector<int> v;
            vector<vector < int>> ans;
            unordered_map<int, int> mp,mp2,mp3;
            vector<int> a;
            for (int i = 0; i < nums1.size(); i++)
            {
                for (int j = 0; j < nums2.size(); j++)
                {
                    if (nums1[i] ==nums2[j])
                    {
                        mp[nums1[i]]++;
                    }
                }
            }
            for (auto i: nums1)
            {
                if (mp.find(i) == mp.end()) mp2[i]++;
            }
            for (auto i: nums2)
            {
                if (mp.find(i) == mp.end()) mp3[i]++;
            }
            for(auto i :mp2)v.push_back(i.first);
            for(auto i :mp3)a.push_back(i.first);
                
            ans.push_back(v);
            ans.push_back(a);
            return ans;
        }
};