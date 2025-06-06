#include <bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int>divisors[N];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i=2;i<N;++i)
    {
        for(int j=i;j<N;j+=i)
        {
            divisors[j].push_back(i);
        }
    }
   for(int i=0;i<10;++i)
   {
    for(int num:divisors[i])
    {
        cout<<num<<" ";
    }
    cout<<endl;
   }



    return 0;
}