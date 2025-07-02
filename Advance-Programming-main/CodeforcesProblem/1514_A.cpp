#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vr vector<ll>arr
#ifdef ONLINE_JUDGE
#define LOCAL_IO()
#else
#define LOCAL_IO() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
bool isperfect(int x)
{
    int root=sqrt(x);
    if(root*root!=x)
    {
        return true;
    }
    return false;
}
void solve_by_rootover()
{
    int n; cin>>n;
    vr(n);
    bool ok=false;
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
        if(isperfect(arr[i]))
        {
            ok=true;
        }

    }

    cout<<(ok?"YES":"NO")<<endl;

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