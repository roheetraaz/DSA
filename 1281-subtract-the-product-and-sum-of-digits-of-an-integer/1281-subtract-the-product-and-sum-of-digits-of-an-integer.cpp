class Solution {
public:
    int subtractProductAndSum(int n) {
           int sum=0;
            int product=1;
            while(n){
                    int x=n%10;
                    sum+=x;
                    product*=x;
                    n=n/10;
            }
            return product-sum;
    }
};