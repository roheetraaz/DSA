class Solution {
public:
    int arraySign(vector<int>& nums) {
        int c1=0;
        for(auto i :nums){
            if(i<0)c1++;
            if(i==0)return 0;
        }
        if(c1%2==1)return -1;
        else return 1;
    }
};