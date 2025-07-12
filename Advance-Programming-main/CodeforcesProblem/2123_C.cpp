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
    int n;cin>>n;
    vr(n);
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
vector<ll> max_arr(n), min_arr(n);

max_arr[n-1]=arr[n-1];
min_arr[0]=arr[0];
for(int i=1;i<n;++i)
{
    min_arr[i]=min(arr[i],min_arr[i-1]);
}
for(int i=n-2;i>=0;--i)
{
    max_arr[i]=max(arr[i],max_arr[i+1]);
}

    string res="";
    for(int i=0;i<n;++i)
    {
        if(arr[i]>min_arr[i]&&arr[i]<max_arr[i])
        {
            res+='0';
        }
        else
        {
            res+='1';
        }
    }
     
    cout<<res<<endl;
    
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