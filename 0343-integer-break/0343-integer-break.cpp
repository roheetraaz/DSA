class Solution
{
    public:
        int integerBreak(int n)
        {
            int ans = 1;
            if (n == 2) return 1;
            if (n == 3) return 2;
            ans = pow(3, (n / 3 - 1));
            if (n % 3 == 1)ans = ans * 4;
            else if (n % 3==2)ans=ans*6;
            else ans=ans*3;
            return ans;
        }
};