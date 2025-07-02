#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vr vector<ll>arr
#define vp push_back
const int N=1e9+7;
#ifdef ONLINE_JUDGE
#define LOCAL_IO()
#else
#define LOCAL_IO() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

void solve_by_rootover()
{
    int n;
    cin>>n;
    for(int i=0;i<=n/2020;++i)
    {
        if((n-2020*i)%2021==0)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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