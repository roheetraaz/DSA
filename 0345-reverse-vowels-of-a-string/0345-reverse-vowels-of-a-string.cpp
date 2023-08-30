class Solution
{
   	// brute force approach
    public:
        string reverseVowels(string s)
        {
            unordered_map<char, int> mp;
            string vowel = "aeiouAEIOU";
            for (auto i: vowel) mp[i]++;
            vector<char> vowels;
            for (auto i: s)
            {
                if (mp[i] != 0) vowels.push_back(i);
            }
            reverse(vowels.begin(),vowels.end());
            int j = 0;
            string ans="";
            for (auto i: s)
            {
                if (mp[i] != 0)
                {

                    ans+= vowels[j];
                    j++;
                }
                else ans+=i;
            }
            return ans;
        }
};