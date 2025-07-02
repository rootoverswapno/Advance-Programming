#include<bits/stdc++.h>
using namespace std;
#define ll long long
#ifdef ONLINE_JUDGE
#define LOCAL_IO()
#else
#define LOCAL_IO() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

void solve_by_rootover()
{
    int a,b;
    cin>>a>>b;
    // int counter=0;
    // if(a%b==0)
    // {
    //     cout<<0<<endl;
    //     return;
    // }
    // if(b>a)
    // {
    //     cout<<b-a<<endl;
    //     return;
    // }
    
    // int div=a/b;
    // int mul=div*b;
    //  div=a-mul;
    //  cout<<b-div<<endl;

    
    cout<<(b-(a%b))%b<<endl;
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