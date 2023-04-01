#include <bits/stdc++.h>
using ll = long long;
class Solution {
public:
    long long makeSubKSumEqual(vector<int>& arr, int k) {
        ll n = arr.size();
        k = gcd(n,k);
        ll ans = 0;
        for(ll i = 0; i < k; i++)
        {
            vector <ll> vec;
            for(ll j = i; j < n; j+=k)
                vec.push_back(arr[j]);
            sort(vec.begin(),vec.end());
            ll mid = vec.size()/2;
            for(ll ind = 0; ind < vec.size(); ind++){
                 cout<<vec[ind];
                ans+=abs(vec[mid]-vec[ind]);
        }
        }
        return ans;
    }
};