class Solution
{
    public:
        int countOdds(int low, int high)
        {
            if(low==high && low%2)return 1;
            if (low % 2 + high % 2 == 0)
            {
                return (high - low) / 2;
            }
            return (high - low - 1) / 2 + low % 2 + high % 2;
        }
};