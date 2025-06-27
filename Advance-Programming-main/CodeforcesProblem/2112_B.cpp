#include<bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
#define LOCAL_IO()
#else
#define LOCAL_IO() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

void solve_by_rootover()
{
    
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i)
    {
        cin>>v[i];
    }
    int ans=-1;
     for(int i=1;i<n;++i)
    {
        if(abs(v[i]-v[i-1])<=1)
        {
            ans=0;
            cout<<ans<<endl;
            return;
        }
       
    }
    for(int i=2;i<n;++i)
    {
        if(min(v[i-1],v[i-2])<=v[i]&&v[i]<=max(v[i-1],v[i-2]))ans=1;
    }
    for(int i=0;i<n-2;++i)
    {
        if(min(v[i+1],v[i+2])<=v[i]&&v[i]<=max(v[i+1],v[i+2]))ans=1;
    }
   
    cout<<ans<<endl;

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