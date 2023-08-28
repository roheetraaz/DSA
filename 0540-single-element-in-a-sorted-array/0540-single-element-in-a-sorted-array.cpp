class Solution
{
    public:
        int singleNonDuplicate(vector<int> &arr)
        {
            int n = arr.size();
            int hi = n - 1;
            int lo = 0;
            if(n==1)return arr[0];
            while (lo <= hi)
            {
                int mid = lo + (hi - lo) / 2;
                if (mid % 2 == 1)
                {
                    if(arr[mid] != arr[(mid + 1) % n] && arr[mid] != arr[(mid - 1 + n) % n])
                    {
                        return arr[mid];
                    }
                    if (arr[mid] == arr[mid + 1])
                    {
                        hi = mid-1 ;
                    }
                    else lo = mid+1 ;
                }
                else
                {
                    if (arr[mid] != arr[(mid + 1) % n] && arr[mid] != arr[(mid - 1 + n) % n])
                    {
                        return arr[mid];
                    }
                    if (arr[mid] == arr[mid + 1])
                    {
                        lo = mid+1 ;
                    }
                    else hi = mid-1;
                }
            }
            return -1;
        }
};