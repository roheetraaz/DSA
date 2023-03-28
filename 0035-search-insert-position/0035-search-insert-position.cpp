class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int x=target;
        int n=nums.size();
        int start=0;
        int end=n;
        while(start<end){
            
            int mid=(start+end)/2;
            if(nums[mid]==x){
                return mid;
            }
            if(nums[mid]<x){
                start=mid+1;
            }
            else{
                end=mid;
            }
        }
        return start;
    }
};