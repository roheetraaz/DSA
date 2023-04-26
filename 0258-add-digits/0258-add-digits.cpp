class Solution
{
    public:
        int addDigits(int num)
        {

            int ans = num;
            while (ans > 9)
            {
                int x = ans;
                int sum = 0;
                while (x > 0)
                {
                    sum += x%10;
                    x /= 10;
                }
                ans = sum;
            }
           return ans;
        }
};