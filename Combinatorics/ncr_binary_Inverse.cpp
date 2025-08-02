#include<bits/stdc++.h>
using namespace std;
#define Rootover_Swapno_Code_Show
#ifdef ONLINE_JUDGE
#define LOCAL_IO()
#else
#define LOCAL_IO() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
const int N=1e5+5;
const int mod=1e9+7;
long long fact[N],inverseFact[N];
long long power(long long a,long long b)
{
    long long res=1;
    while(b>0)
    {
        if(b&1)
        {
            res=(res*1LL*a)%mod;
        }
        b=b>>1;
        a=(a*1LL*a)%mod;
    }
    return res;
}
void precompute()
{
    fact[0]= inverseFact[0]=1;
    for(int i=1;i<N;++i)
    {
        fact[i]=(fact[i-1]*i)%mod;
        inverseFact[i]=power(fact[i],mod-2);
    }
}

long long nCr(int n,int r)
{
    if(r>n)return 0;
    return fact[n]*inverseFact[r]%mod*inverseFact[n-r]%mod;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    LOCAL_IO();
    precompute();
      int n,r;
    cin>>n>>r;
    cout<<"nCr = "<<nCr(n,r)<<endl;




    return 0;
}