#include<bits/stdc++.h>
using namespace std;
#define Rootover_Swapno_Code_Show
#ifdef ONLINE_JUDGE
#define LOCAL_IO()
#else
#define LOCAL_IO() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

int func(int index,bool buy,int n,vector<int>& prices
    ,vector<vector<int>>&dp,int fee)
{
    if(index>=n)
    {
        return 0;
    }
    if(dp[index][buy]!=-1)
    {
        return dp[index][buy];
    }

    int total_prices=0;
    

    if(buy)
    {
        int b=func(index+1,!buy,n,prices,dp,fee)-prices[index];

        int nb=func(index+1,buy,n,prices,dp,fee);
        total_prices=max(b,nb);

    }
    else
    {

        int s=func(index+1,!buy,n,prices,dp,fee)+prices[index]-fee;

        int ns=func(index+1,buy,n,prices,dp,fee);

        total_prices=max(s,ns);
    }

    return dp[index][buy]=total_prices;
}
int maxProfit(vector<int>& prices,int fee)
 {
      int n=prices.size();
    vector<vector<int>>dp(n,vector<int>(2,-1));
 
    return func(0,true,n,prices,dp,fee);
       
        
 }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    LOCAL_IO();

    int n,fee;
    cin>>n>>fee;
    vector<int>arr(n);
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    cout<<maxProfit(arr,fee)<<endl;
    return 0;
}