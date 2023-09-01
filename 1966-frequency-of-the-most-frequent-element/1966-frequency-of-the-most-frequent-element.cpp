class Solution
{
    public:

        int maxFrequency(vector<int> &arr, int k)
        {
            sort(arr.begin(), arr.end());
            int n = arr.size();
            vector<long long> pre(n, 0);
            pre[0] = arr[0];
            for (int i = 1; i < n; i++)
            {
                pre[i] = pre[i - 1] + arr[i];
            }
            int ans = 0;
            int i = 0;
            int j = 0;
            while ( i< n and j < n )
            {
                // int req= (arr[j] * (j-i+1)) -pre[j];
                
                // while(i < j and k < req){
                //     // req =req -(arr[j] -arr[i]);
                //     i++;
                //     req= (arr[j] * (j-i+1)) -pre[j];
                //     if(i>0)req+=pre[i-1];
                // }
                // ans=max(ans,j-i+1);
                // j++;
                int win_len=j-i+1;
             

                long long req = 1LL*arr[j] *(j - i + 1) - pre[j];
                if(i>0)req+=pre[i-1];
          
                if (k >= req)
                {
                    j++;
                    ans = max(ans,win_len);
                    
                }
                else
                {
                    
                    i++;
                }
            }
            return ans;
        }
};