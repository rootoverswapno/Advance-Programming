#include <bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;
vector<int>dp(15);
void pre()
{
    dp[0]=1;
    for(int i=1;i<15;++i)
    {
        dp[i]=dp[i-1]+((i%3==i%5)?1:0);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    pre();
   int t;
   cin>>t;
   while(t--)
   {
    
    long long n;
    cin>>n;
    long long count =(n/15)*3;
    count+=dp[n%15];
     cout<<count<<endl;
   }
    
    return 0;
}