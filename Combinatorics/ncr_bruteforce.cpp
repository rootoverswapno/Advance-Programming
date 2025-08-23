#include<bits/stdc++.h>
using namespace std;
#define Rootover_Swapno_Code_Show
#ifdef ONLINE_JUDGE
#define LOCAL_IO()
#else
#define LOCAL_IO() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
long long ncr(int n,int r)
{
    long long res=1;
    for(int i=0;i<r;++i)
    {
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
void print(int n)
{
    vector<vector<int>>result;
    for(int i=0;i<n;++i)
    {
         vector<int>res;
         for(int j=0;j<=i;++j)
         {
            res.push_back(ncr(i,j));
         }
         result.push_back(res);
    }
     
    for(auto &i:result)
    {
       for(auto &j:i)
       {
        cout<<j<<" ";
       }
       cout<<endl;
    }
    cout<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    LOCAL_IO();
    
    // int n,r;
    // cin>>n>>r;
    // cout<<ncr(n,r)<<endl;
    int row;
    cin>>row;
    print(row);
    




    return 0;
}