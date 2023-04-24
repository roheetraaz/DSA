class Solution
{
    public:
        int lastStoneWeight(vector<int> &stones)
        {
            int n = stones.size() - 1;

            while (n>0)
            {
                sort(stones.begin(), stones.end());
                if (stones[n] == stones[n - 1])
                {
                    stones.pop_back();
                    n--;
                }
                else
                {
                    stones[n - 1] = stones[n] - stones[n - 1];
                }

                stones.pop_back();
                n--;
            }

            if (stones.empty())
            {
                return 0;
            }

            return stones[0];
        }
};