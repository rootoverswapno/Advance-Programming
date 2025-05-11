#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<bool> prime(N, 1);
    prime[0] = prime[1] = false;
    for (int i = 2; i < N; ++i)
    {
        if (prime[i] == true)
        {
            //we initialize j=2*i because of we note down i is prime;
            for (int j = 2 * i; j < N; j += i)
            {
                prime[j]=false;
            }
        }
    }
    for(int i=0;i<100;++i)
    {
        cout<<prime[i]<<endl;
    }

    return 0;
}