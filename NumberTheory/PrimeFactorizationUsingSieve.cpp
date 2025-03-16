#include <bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>isprime(N,1);
    isprime[0]=isprime[1]=false;
    vector<int>lp(N,0);
    vector<int>hp(N,0);
    for(int i=2;i<N;++i)
    {
        if(isprime[i]==true)
        {
            lp[i]=hp[i]=i;
            for(int j=2*i;j<N;j+=i)
            {
                isprime[j]=false;
                hp[j]=i;
                if(lp[j]==0)
                {
                    lp[j]=i;
                }
            }
        }
    }
    // for(int i=0;i<100;++i)
    // {
    //     cout<<lp[i]<<" "<<hp[i]<<endl;
    // }
    int num;
    cin>>num;
    vector<int>prime_factors;
    map<int,int>mp;
    while(num>1)
    {
        int primefactor=lp[num];
       while(num%primefactor==0)
       {
          num/=primefactor;
          mp[primefactor]++;
       }
    }

    for(auto num:mp)
    {
        cout<<num.first<<" "<<num.second<<endl;
    }

    


    return 0;
}