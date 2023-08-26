class Solution
{
    public:
        bool incSubSeq(vector<string> &arr, int cur, int pre)
        {
            for (int row = 0; row < arr.size(); row++)
            {
               	// pre element greater means its not 
               	// increasing subsequence
                if (arr[row][pre] > arr[row][cur]) return false;
            }
            return true;
        }

    int minDeletionSize(vector<string> &A)
    {
        int n = A[0].size();
        vector<int> dp(A[0].size(), 1);
        for (int cur = 0; cur < n; cur++)
        {
            for (int pre = 0; pre < cur; pre++)
            {
               	// Return true if previous element smaller or equal
               	// for increasing/equal subsequence
                if (incSubSeq(A, cur, pre))
                {
                    dp[cur] = max(dp[cur], dp[pre] + 1);
                }
            }
        }
       	// delete rest of elements apart from LIS
        return n - *max_element(dp.begin(), dp.end());
    }
};