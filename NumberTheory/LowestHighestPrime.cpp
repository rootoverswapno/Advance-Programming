#include <bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int>isprime(N,1);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>lp(N,0);
    vector<int>hp(N,0);
    isprime[0]=isprime[1]=false;
    for(int i=2;i<N;++i)
    {
        if(isprime[i]==1)
        {
            lp[i]=hp[i]=i;
            for(int j=2*i;j<N;j+=i)
            {
                isprime[j]=false;
               //lower prime
                hp[j]=i;

                //higher prime
                if(lp[j]==0)
                {
                    lp[j]=i;
                }

            }

        }
    }

    for(int i=2;i<100;++i)
    {
        cout<<lp[i]<<" "<<hp[i]<<endl;
    }
    



    return 0;
}