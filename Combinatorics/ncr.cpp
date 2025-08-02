#include<bits/stdc++.h>
using namespace std;
#define Rootover_Swapno_Code_Show
#ifdef ONLINE_JUDGE
#define LOCAL_IO()
#else
#define LOCAL_IO() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
long long fact(int n)
{
    int res=1;
    for(int i=2;i<=n;++i)
    {
        res*=i;
    }
    return res;
}
long long nCr(int n,int r)
{
    if(r>n)return 0;
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    LOCAL_IO();

    int n,r;
    cin>>n>>r;
    cout<<"nCr = "<<nCr(n,r)<<endl;




    return 0;
}