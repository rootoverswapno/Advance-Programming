#include<bits/stdc++.h>
using namespace std;
#define Rootover_Swapno_Code_Show
#ifdef ONLINE_JUDGE
#define LOCAL_IO()
#else
#define LOCAL_IO() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
 const int N=1e3+10;
 int dp[N];
int func(int i,vector<int>&arr)
{
    if(i==0)return 0;
    if(dp[i]!=-1)return dp[i];
	int cost=INT_MAX;
	cost=min(cost,func(i-1,arr)+abs(arr[i]-arr[i-1]));
    if(i>1)
	cost=min(cost,func(i-2,arr)+abs(arr[i]-arr[i-2]));

	return dp[i]=cost;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    LOCAL_IO();
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;++i)
    {
    	cin>>arr[i];
    }

   cout<<func(n-1,arr)<<endl;

    

    return 0;
}