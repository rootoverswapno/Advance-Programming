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
int binaryExponential(int a,int b)
{
    if(b==0)return 1;
    int res=binaryExponential(a,b/2);
    if(b&1)return (a*(res*1LL*res)%N)%N;
    else return (res*1LL*res)%N;
}
void solve_by_rootover()
{
    int a,b;
    cin>>a>>b;
    cout<<binaryExponential(a,b)<<endl;
      
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