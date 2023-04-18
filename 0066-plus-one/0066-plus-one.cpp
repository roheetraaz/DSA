class Solution
{
    public:
        vector<int> plusOne(vector<int> &digits)
        {
            int n = digits.size();

            if (digits[n - 1] != 9)
            {
                digits[n - 1] += 1;
                return digits;
            }
            else 
            {
                if(n>1){
                digits[n - 1] = 0;
                digits[n - 2] += 1;
                for (int i = n - 2; i > 0; i--)
                {
                    if (digits[i] == 10)
                    {
                        digits[i] = 0;
                        digits[i - 1] += 1;
                    }
                }
                }
            }
            if (digits[0] == 10 ||(digits[0]==9 && n==1))
            {
                vector<int> a;
                a.push_back(1);
                a.push_back(0);
                for (int i = 1; i < n; i++) a.push_back(digits[i]);
                return a;
            }

            return digits;
        }
};