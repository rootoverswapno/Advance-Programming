#include<bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
#define LOCAL_IO()
#else
#define LOCAL_IO() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

void solve_by_rootover()
{
   int a,x,y;
   cin>>a>>x>>y;
   int dx=abs(a-x);
   int dy=abs(a-y);
   for(int i=a-1000;i<=a+1000;++i)
   {
      int dx_b=abs(i-x);
      int dy_b=abs(i-y);
       if(i==a)continue;
       if(dx_b<dx&&dy_b<dy)
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