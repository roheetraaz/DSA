class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n=derived.size();
        vector<int>valid(n,-1);
        int count=0;
        for(int i=0;i<n-1;i++){
            if(derived[i]==1){
                count++;
            }
        }
        if(n==1){
            if(derived[0]==0)return true;
                return false;
        }
        int val=0;
        if(count==0)val=0;
        else if(derived[0]==1){
            if(count%2==0){
                val=1;
            }
            else{
                val=0;
            }
        }
        else if(derived[0]==0){
            if(count%2==0){
                val=0;
            }
            else{
                val=1;
            }
        }
        if(val^derived[0]==derived[n-1])return true;
        return false;
    }
};