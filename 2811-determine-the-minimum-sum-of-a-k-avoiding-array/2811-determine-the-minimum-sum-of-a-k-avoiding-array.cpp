class Solution {
public:
    int minimumSum(int n, int k) {
        unordered_map<int,int> mp;
        int sum = 0;
        int j = 0, num = 1;
        while (j < n) {
            int diff = k - num;
            if (mp.find(diff) == mp.end()) {
                mp[num]++;
                sum += num;
                num++;
                j++;
            } else {
                num++;
            }
        }
        return sum;
    }
};