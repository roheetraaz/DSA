class Solution
{
    public:
        vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
        {

            vector<int> ans;
            sort(potions.begin(),potions.end());
            for (int i = 0; i < spells.size(); i++)
            {
                long long z = ceil((double)success / spells[i]);
                int x=lower_bound(potions.begin(),potions.end(),z)-potions.begin();
                ans.push_back(potions.size()-x);
            }
            return ans;
        }
};