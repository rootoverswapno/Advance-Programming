#include <bits/stdc++.h>
using namespace std;
const int N=1e3+10;
 vector<int>dp(N+1,-1);
int solve(int n,vector<int>&v)
{
    if(n<0)return 0;
    if(n==0||n==1)return v[n];
    if(dp[n]!=-1)return dp[n];

    dp[n]=v[n]+min(solve(n-1,v),solve(n-2,v));
    return dp[n];
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
   
    vector<int>v(n);
    for(auto &i:v)
    {
        cin>>i;
    }
    
    cout<<min(solve(n-1,v),solve(n-2,v))<<endl;
    return 0;
}