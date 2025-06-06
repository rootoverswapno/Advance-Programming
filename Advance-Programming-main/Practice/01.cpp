#include <bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int wt[N];
int val[N];
int dp[N][N];
int func(int index,int wt_left)
{
    if(wt_left==0)return 0;
    
    if(index<0)return 0;
   
    if(dp[index][wt_left]!=-1)return dp[index][wt_left];

      //if i not taken
       int value=func(index-1,wt_left);

      //if i taken
       if(wt_left-wt[index]>=0)
       {
        value=max(value,func(index-1,wt_left-wt[index])+val[index]);
       }
      
    return dp[index][wt_left]=value;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(dp,-1,sizeof(dp));
    int n,w;
    cin>>n>>w;
    for(int i=0;i<n;++i)
    {
        cin>>wt[i]>>val[i];
    }
    cout<<func(n-1,w);

    return 0;
}