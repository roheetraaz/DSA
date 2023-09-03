class Solution {
public:
    int integerBreak(int n) {
        int ans=1;
        if(n==2)return 1;
        if(n==3)return 2;
        while(n>4){
            ans=ans*3;
            n=n-3;
        }
        return ans*n;
    }
};