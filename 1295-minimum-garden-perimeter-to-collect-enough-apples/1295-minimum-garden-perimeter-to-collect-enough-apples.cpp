class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        long long i = 1;
        long long sum=12;
        while(sum<neededApples){
            i++;
           long long ans= 12*i +( 12*i*(i-1));
           sum+=ans;
            
        }
        return i*8;
    }
};