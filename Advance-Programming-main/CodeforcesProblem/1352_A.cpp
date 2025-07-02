#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vr vector<ll>arr
#define vp push_back
#ifdef ONLINE_JUDGE
#define LOCAL_IO()
#else
#define LOCAL_IO() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

void solve_by_rootover()
{
    int n;cin>>n;
    int pos=1;
    vector<int>res;
    while(n>0)
    {
        int mod=n%10;
        if(mod!=0)
        {
           res.vp(mod*pos);
        }
        n/=10;
        pos*=10;
    }
    cout<<res.size()<<endl;
    for(auto &i:res)
    {
        cout<<i<<" ";
    }
    cout<<endl;
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