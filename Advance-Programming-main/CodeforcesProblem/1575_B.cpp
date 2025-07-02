#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vr vector<ll>arr
#define vp push_back
const int N=1e6+7;
#ifdef ONLINE_JUDGE
#define LOCAL_IO()
#else
#define LOCAL_IO() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
int dp[N];
bool check(int n,int sum)
{    
     if(sum==n)return true;
     if(sum>n)return false;
     if(dp[sum]!=-1)
     {
        return dp[sum];
     }
     return dp[sum]=check(n,sum+2021)||check(n,sum+2020);
     
}
void solve_by_rootover()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    int sum=0;
    if(check(n,sum))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    LOCAL_IO();
    int testcase;
    cin >> testcase;
    for(int i = 1; i <= testcase; ++i)
    {
        solve_by_rootover();
    }
    return 0;
}