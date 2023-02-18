#include <bits/stdc++.h>
#include <climits>
int mod=998244353;
int md=1e9+7;
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int z;
cin>>z;
while(z--)
{
    int n;
    cin>>n;
    int v[n][n];
    int x=n*n;
    int y=1;
    for(int i=0;i<n;i++){
        if(i%2==1){
            for(int j=0;j<n;i++){
                if(j%2==0){
                    v[i][j]=y;
                    y++;
                }
                else{
                    v[i][j]=x;
                    x--;
                }
            }
        }
        else{
            for(int j=0;j<n;i++){
                if(j%2==0){
                    v[i][j]=x;
                    x--;
                }
                else{
                    v[i][j]=y;
                    y++;
                }
            }
        }
    }
    for(int k=0;k<n;k++){
       for(int l=0;l<n;l++){
         cout<<v[k][l]<<" ";
        }
        cout<<endl;
    }
}
return 0;
}