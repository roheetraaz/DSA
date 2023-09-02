class Solution
{
    public:
        int calculateCombinationsModM(int totalNumbers, int selectedNumbers, int modulo)
        {
            if (selectedNumbers == 0)
                return 1;

            std::vector<int> factorialArray(totalNumbers + 1);
            factorialArray[0] = 1;

            for (int i = 1; i <= totalNumbers; i++)
                factorialArray[i] = (1LL *factorialArray[i - 1] *i) % modulo;

            int result = factorialArray[totalNumbers];
            result = (1LL *result* calculateModularInverse(factorialArray[selectedNumbers], modulo)) % modulo;
            result = (1LL *result* calculateModularInverse(factorialArray[totalNumbers - selectedNumbers], modulo)) % modulo;

            return result;
        }

    int calculateModularInverse(int number, int modulo)
    {
        int originalModulo = modulo;
        int inverse = 0, multiplier = 1;

        while (number > 1)
        {
            int quotient = number / modulo;
            int remainder = number % modulo;
            number = modulo;
            modulo = remainder;
            int temp = inverse;
            inverse = multiplier - quotient * inverse;
            multiplier = temp;
        }

        if (multiplier < 0)
            multiplier += originalModulo;

        return multiplier;
    }
    int countKSubsequencesWithMaxBeauty(string s, int k)

    {
        int mod = 1000000007;
        unordered_map<char, int> mp;
        vector<int> ans;
        for (auto i: s) mp[i]++;
        for (auto i: mp)
        {
            ans.push_back(i.second);
        }
        sort(ans.begin(), ans.end());
        int n = ans.size();
        int l = ans.size() - k;
        if (l < 0) return 0;
        int curr = 0;
        for (int i = 0; i <= l; i++)
        {
            curr += ans[i];
        }
        long long res = 1;
        int lowest_cnt = ans[l];
        int total_cnt = 0;
        int curr_cnt = 0;
        for (int i = l ; i < n; i++)
        {
            res = (1LL*res *ans[i]) % mod;
            if (ans[i] == lowest_cnt) curr_cnt++;
        }
        for (int i = 0; i < n; i++)
        {
            if (ans[i] == lowest_cnt) total_cnt++;
        }
  
        res = (res* 1LL*calculateCombinationsModM(total_cnt, curr_cnt, mod)) % mod;
        return res;
    }
};