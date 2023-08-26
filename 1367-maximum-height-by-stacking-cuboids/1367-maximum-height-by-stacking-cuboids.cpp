class Solution
{
    public:
    int dp[101][101];
    vector<vector<int>>arr;
        bool check(int curr, int prev)
        {
           if(arr[curr][0]>=arr[prev][0] && arr[curr][1]>=arr[prev][1] && arr[curr][2]>=arr[prev][2]  )return true;
           return false;
        }
    int lis(int cur, int prev)
    {

        if (cur == arr.size()) return 0;

        if (dp[cur][prev + 1] != -1) return dp[cur][prev + 1];

        int ans = lis(cur + 1, prev);

        if (prev == -1 or check(cur, prev))
        {
            ans = max(ans, arr[cur][2] + lis(cur + 1, cur));
        }

        return dp[cur][prev + 1] = ans;
    }

    int maxHeight(vector<vector < int>> &cuboids)
    {
        for (auto &a: cuboids)
        {
            sort(a.begin(), a.end());
        }
        sort(cuboids.begin(), cuboids.end());
        arr=cuboids;
        memset(dp,-1,sizeof(dp));
        return lis(0,-1);
    }
};