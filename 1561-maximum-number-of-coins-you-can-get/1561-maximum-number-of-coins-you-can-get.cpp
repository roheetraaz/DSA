class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int sum=0;
        int count=n/3;
        while(count--){
                sum+=piles[n-2];
                n=n-2;
        }
        return sum;
    }
};