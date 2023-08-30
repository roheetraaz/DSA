class Solution {
public:
    int compress(vector<char>& s) {
        char cur=s[0];
        string ans="";
        int cnt=0;
        int n =s.size();
        for(int i=0;i<n;i++){
            if(s[i]!=cur){
                 ans+=cur;
                cur=s[i];
               
                if(cnt>1){
                    ans+=to_string(cnt);
                    cnt=1;
                }
             
            }
            else cnt ++;
            if(i==n-1){
                ans+=s[i];
                if(cnt>1) {
                    ans+=to_string(cnt);
                }
            }
        }
        vector<char>l;
        for(auto i : ans)l.push_back(i);
        s=l;
        return ans.size();
    }

};