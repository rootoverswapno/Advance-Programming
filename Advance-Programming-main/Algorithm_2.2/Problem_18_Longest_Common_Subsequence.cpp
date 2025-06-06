#include <bits/stdc++.h>
using namespace std;
int dp[100][100];
int lcs(string &s1,string &s2,int i,int j)
{
    if(i<0||j<0)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int ans=lcs(s1,s2,i-1,j);
    ans=max(ans,lcs(s1,s2,i,j-1));
    ans=max(ans,lcs(s1,s2,i-1,j-1)+(s1[i]==s2[j]));
    return dp[i][j]=ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(dp,-1,sizeof(dp));
     string s1,s2;
     cin>>s1>>s2;
     cout<<lcs(s1,s2,s1.size()-1,s2.size()-1); 
    return 0;
}