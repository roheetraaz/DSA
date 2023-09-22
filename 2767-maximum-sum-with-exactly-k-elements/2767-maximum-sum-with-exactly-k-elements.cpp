class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int x = *max_element(nums.begin(),nums.end());
        return x*k+(k-1)*k/2;
    }
};