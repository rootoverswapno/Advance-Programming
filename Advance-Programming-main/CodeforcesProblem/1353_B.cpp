#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vr vector<ll>arr
#define vr1 vector<ll>arr
#define vp push_back
#ifdef ONLINE_JUDGE
#define LOCAL_IO()
#else
#define LOCAL_IO() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

void solve_by_rootover()
{
    int n,k;
    cin>>n>>k;
    vr(n),arr2(n);
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;++i)
    {
        cin>>arr2[i];
    }
    sort(arr.begin(),arr.end());
    sort(arr2.begin(),arr2.end());

    for(int i=0,j=n-1;i<n,j>=0;++i,j--)
    {
      if(arr[i]<arr2[j]&&k!=0)
      {
        swap(arr[i],arr2[j]);
        k--;
      }
    }
    int sum=accumulate(arr.begin(),arr.end(),0);
    cout<<sum<<endl;  
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