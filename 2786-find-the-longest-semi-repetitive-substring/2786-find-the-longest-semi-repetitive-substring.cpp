class Solution
{
    public:
        int longestSemiRepetitiveSubstring(string s)
        {
            int n = s.size();
            bool flag=false;
            int count=1;
            int maxi=INT_MIN;
            int temp=1;
            for (int i = 1; i < n; i++) {
                if(!flag && s[i]==s[i-1]){
                    flag=true;
                    count++;
                    temp=i;
                }

                else if(flag && s[i]==s[i-1]){
                    count=1;
                    i=temp;
                    flag=false;
                }
                else {
                    count++;
                }
                maxi=max(count, maxi);
            }
            return maxi==INT_MIN ? 1:maxi;
        }
};