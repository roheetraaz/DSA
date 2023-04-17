class Solution
{
    public:
        vector<bool> kidsWithCandies(vector<int> &candies, int e)
        {
            int z = *max_element(candies.begin(), candies.end());
            vector<bool> ans;
            for (int i = 0; i < candies.size(); i++)
            {
                ans.push_back(candies[i] - z + e >= 0);
            }
            return ans;
        }
};