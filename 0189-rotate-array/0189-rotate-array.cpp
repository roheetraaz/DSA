class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int b[n];
        for(int i=0;i<n;i++){
            b[i]=nums[i];
        }
        for(int i=0;i<n;i++){
            nums[i]=b[((i+n-k%n))%n];
        }
 
    }
};