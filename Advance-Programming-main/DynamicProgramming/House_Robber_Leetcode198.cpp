#include<bits/stdc++.h>
using namespace std;
#define Rootover_Swapno_Code_Show
#ifdef ONLINE_JUDGE
#define LOCAL_IO()
#else
#define LOCAL_IO() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
const int N=1e3+10;
vector<int>dp(N);
int func(vector<int>&arr,int n)
{
	if(n==0)return arr[n];
	if(n<0)return 0;
    if(dp[n]!=-1)return dp[n];
	int maxProfit=INT_MIN;

	maxProfit=max(arr[n]+func(arr,n-2),func(arr,n-1));

	return dp[n]=maxProfit;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    LOCAL_IO();
   fill(dp.begin(),dp.end(),-1);
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;++i)
    {
    	cin>>arr[i];
    }
   cout<<func(arr,n-1)<<endl;


    

    return 0;
}