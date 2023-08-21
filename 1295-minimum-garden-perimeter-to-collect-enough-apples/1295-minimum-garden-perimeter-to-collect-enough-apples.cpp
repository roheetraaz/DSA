class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
         int i = 1;
        long long sum=12;
        while(sum<neededApples){
            i++;
           long long ans= 12*1LL*i*i;
           sum+=ans;
            
        }
        return (long long)i*8;
    }
};