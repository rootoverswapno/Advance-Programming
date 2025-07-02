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
    vr(n);
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    int count0=0;
    int count1=0;

    for(int num:arr)
    {
        if(num==0)count0++;
        else count1++;
    }

    int mid=n/2;

    vector<ll>res;
    if(count0>=mid)
    {
        for(int i=0;i<mid;++i)
        {
            res.vp(0);
        }
    }
    else
    {
        int ct=(count1/2)*2;
        for(int i=0;i<ct;++i)
        {
            res.vp(1);
        }
    }
    cout<<res.size()<<endl;
    for(ll &num:res)
    {
        cout<<num<<" ";
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