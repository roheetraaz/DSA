class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
    //    Sliding Window Approch
        int j=0;
        int max_con_one=0;
        int count_zero=0;
        // Traverse over the Array
        for(int i=0;i<nums.size();i++)
        {
            // if element is Zero -> Increase ZeroCount
            if(nums[i]==0)
            count_zero++;

            // if The Zero Count Exceed k(Max Zero) then Shrink Our Window Size
            while(count_zero > k)
            {
                // if zero comes then decrease zero Count
                if(nums[j]==0)
                count_zero--;
                // Update j to Shrink Window Size
                j++;
            }
            // Update result in Every Step
            int window_length=i-j+1;
            // +1 is for 0 based Index
            max_con_one=max(max_con_one,window_length);
        } 
        return max_con_one;
    }
};