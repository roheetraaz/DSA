class Solution {
public:
    int minimumSum(int n, int k) {
        set<int>ans;
        vector<int>d1;
        for(int i =1;i<=n;i++)d1.push_back(i);
        int k1=1;
        for(int i=0;i<d1.size();i++){
            for(int j=0;j<d1.size();j++){
                if(d1[i]+d1[j]==k && i!=j){
                    ans.insert(max(d1[i],d1[j]));
                    d1.push_back(n+k1);
                    k1++;
                }
            }
        }
        for(auto i : ans)cout<<i<<" ";

        vector<int>final;
        int sum=0;
        unordered_map<int,int>mp;
        for(auto i :ans)mp[i]++;
        int l=1;
        while(final.size()!=n){
            if(mp.find(l)==mp.end())final.push_back(l);
            l++;
        }
        for(auto i : final)sum+=i;
        return sum;
    }
};